#include "client_chat_window.h"
#include "client_manager.h"
#include <QAction>
#include <QLabel>

#include <QFileDialog>
#include <QMessageBox>
#include <QApplication>
#include <QDesktopServices>
#include <QUrl>

client_chat_window::client_chat_window(QWidget *parent)
    : QMainWindow(parent)
{
    central_widget = new QWidget();
    setCentralWidget(central_widget);

    status_bar = new QStatusBar(this);
    setStatusBar(status_bar);

    insert_name = new QLineEdit(this);
    insert_name->setPlaceholderText("Insert your name here");
    connect(insert_name, &QLineEdit::editingFinished, this, &client_chat_window::send_name);

    list = new QListWidget(this);

    QLabel *message = new QLabel("Send Message-->Server", this);
    insert_message = new QLineEdit(this);
    hbox = new QHBoxLayout();

    QPushButton *file = new QPushButton("Open Server Directory", this);
    connect(file, &QPushButton::clicked, this, &client_chat_window::folder);

    QPushButton *send_file = new QPushButton("...", this);
    connect(send_file, &QPushButton::clicked, this, &client_chat_window::send_file);

    hbox->addWidget(message);
    hbox->addWidget(insert_message);
    hbox->addWidget(file);
    hbox->addWidget(send_file);

    send_button = new QPushButton("Send", this);
    connect(send_button, &QPushButton::clicked, this, &client_chat_window::send_message);

    _client = new client_manager();
    connect(_client, &client_manager::text_message_received, this, &client_chat_window::text_message_received);
    connect(_client, &client_manager::is_typing_received, this, &client_chat_window::is_typing_received);
    connect(_client, &client_manager::init_receiving_file, this, &client_chat_window::init_receiving_file);
    connect(_client, &client_manager::reject_receiving_file, this, &client_chat_window::reject_receiving_file);
    connect(_client, &client_manager::file_saved, this, &client_chat_window::file_saved);
    connect(insert_message, &QLineEdit::textChanged, _client, &client_manager::send_is_typing);

    VBOX = new QVBoxLayout(central_widget);
    VBOX->addWidget(insert_name);
    VBOX->addWidget(list);
    VBOX->addLayout(hbox);
    VBOX->addWidget(send_button);
}

client_chat_window::~client_chat_window()
{
    delete central_widget;
    delete hbox;
    delete wid;
    delete line;
}

void client_chat_window::send_message()
{
    QString message = insert_message->text();

    _client->send_text(message);

    wid = new chat_line();
    wid->set_message(message, true);
    wid->setStyleSheet("color: black;");

    line = new QListWidgetItem();
    line->setSizeHint(QSize(0, 65));
    line->setBackground(QBrush(QColorConstants::Svg::lightblue));

    list->addItem(line);
    list->setItemWidget(line, wid);

    insert_message->clear();
}

void client_chat_window::send_file()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Select a File", "/home");

    if (!file_name.isEmpty())
    {
        _client->send_init_sending_file(file_name);

        file_name.clear();
    }
}

void client_chat_window::text_message_received(QString message)
{
    wid = new chat_line();
    wid->set_message(message);
    wid->setStyleSheet("color: black;");

    line = new QListWidgetItem();
    line->setBackground(QBrush(QColorConstants::Svg::lightgray));
    line->setSizeHint(QSize(0, 65));

    list->addItem(line);
    list->setItemWidget(line, wid);
}

void client_chat_window::send_name()
{
    QString name = insert_name->text();

    _client->send_name(name);
}

void client_chat_window::is_typing_received()
{
    status_bar->showMessage("Serving is typing...", 1000);
}

void client_chat_window::init_receiving_file(QString client_name, QString file_name, qint64 file_size)
{
    QString message = QString("%1 wants to send a File. Willing to accept it or not?\n File Name: %2\n File Size: %3 bytes").arg("Server", file_name).arg(file_size);

    QMessageBox::StandardButton result = QMessageBox::question(this, "Receiving File", message);

    if (result == QMessageBox::Yes)
        _client->send_accept_file();
    else
        _client->send_reject_file();
}

void client_chat_window::reject_receiving_file()
{
    QMessageBox::critical(this, "File Rejected", "Sending File Rejected");
}

void client_chat_window::file_saved(QString path)
{
    QString message = QString("File save at: %1").arg(path);

    QMessageBox::information(this, "File Saved", message);
}

void client_chat_window::folder()
{
    QString executable_directory = QApplication::applicationDirPath();
    QString full_client_directory = QDir(executable_directory).filePath("Server");

    QString selected_file_path = QFileDialog::getOpenFileName(this, "Open Client Directory", full_client_directory);

    if (!selected_file_path.isEmpty())
        QDesktopServices::openUrl(QUrl::fromLocalFile(selected_file_path));
}
