#pragma once

#include "client_manager.h"
#include "client_chat_window.h"
#include "client_manager.h"
#include <QMainWindow>
#include <QWidget>
#include <QStatusBar>
#include <QMenuBar>
#include <QMenu>
#include <QListWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QTabWidget>
#include <QMap>
#include <QLineEdit>
#include <QStackedWidget>
#include <QListWidget>

class client_main_window : public QMainWindow
{
    Q_OBJECT
public:
    client_main_window(QWidget *parent = nullptr);

    void add_on_top(const QString &client_name);

private:
    QWidget *central_widget;

    QStatusBar *status_bar;

    QMenuBar *menu_bar;
    QMenu *menu;

    QTabWidget *tabs;

    QVBoxLayout *VBOX;
    client_manager *_client;

    static QMap<QString, QWidget *> window_map;

    static QMap<QString, QString> name_list;

    QLineEdit *name;

    static QStackedWidget *stack;
    QListWidget *list;

    QPushButton *back_button;

private slots:
    void connected();

    void on_clients_list(QString my_name, QMap<QString, QString> other_clients);
    void on_client_connected(QString client_name);
    void on_client_name_changed(QString old_name, QString client_name);
    void on_client_disconnected(QString client_name);

    void on_text_message_received(QString sender, QString message);
    void on_is_typing_received(QString sender);
    void on_name_changed();

    void on_socket_disconnected();

    void on_item_clicked(QListWidgetItem *item);

    void on_text_message_sent(QString client_name);
};