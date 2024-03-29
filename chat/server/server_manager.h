#pragma once

#include "chat_protocol.h"
#include <QMainWindow>
#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>
#include <QHostAddress>

class server_manager : public QMainWindow
{
    Q_OBJECT
public:
    server_manager(QHostAddress ip = QHostAddress::LocalHost, int port = 12345, QWidget *parent = nullptr);
    server_manager(QTcpSocket *client, QWidget *parent = nullptr);
    void disconnect_all_clients();

    void connect_to_server();

    void send_text(QString text);
    void send_name(QString name);
    void send_is_typing();

    void send_init_sending_file(QString filename);
    void send_accept_file();
    void send_reject_file();

    QString name() const;

    QList<QTcpSocket *> _clients; // I made it public cause I nedd an object within the server_main_window's destructor to access it and call delete on all clients'pointer

private:
    QWidget *central_widget;

    QTcpServer *_server;
    chat_protocol *_protocol;

    QTcpSocket *_socket;

    QString _file_name;

    QHostAddress _ip;
    int _port;

    void send_file();
    void save_file();

signals:
    void new_client_connected(QTcpSocket *client);
    void new_client_disconnected(QTcpSocket *client);

    void disconnected();

    void text_message_received(QString message);
    void name_changed(QString name);
    void is_typing_received();

    void init_receiving_file(QString client_name, QString file_name, qint64 file_size);
    void reject_receiving_file();

    void file_saved(QString path);

private slots:
    void new_connection();
    void client_disconnected();

    void ready_read();
};
