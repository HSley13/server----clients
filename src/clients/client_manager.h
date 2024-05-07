#pragma once

#include "chat_protocol.h"
#include "database.h"

#include <QtWidgets>
#include <QtCore>
#include <QtMultimedia>

class client_manager : public QMainWindow
{
    Q_OBJECT
public:
    client_manager(QWidget *parent = nullptr);

    void send_text(QString sender, QString receiver, QString text);
    void send_name(QString name);
    void send_is_typing(QString sender, QString receiver);

    void send_init_sending_file(QString filename);
    void send_accept_file();
    void send_reject_file();

    void send_init_sending_file_client(QString sender, QString receiver, QString filename);
    void send_accept_file_client(QString receiver);
    void send_reject_file_client(QString sender, QString receiver);

    void send_file();
    void send_file_client(int port_transfer);

    void save_file();
    void save_file_client(QString sender);

    void log_in(QString ID);

    void send_lookup_friend(QString ID);

    void send_create_conversation_message(QString participant1, int participant1_ID, QString participant2, int participant2_ID, int conversation_ID);

    void send_save_conversation_message(QString sender, QString receiver, QString content, int conversation_ID);

    static QString _my_ID;

    static QString _full_name;

private:
    static QTcpSocket *_socket;
    QHostAddress _ip = QHostAddress::LocalHost;
    int _port = 12345;

    static chat_protocol *_protocol;

    static QTcpServer *_file_server;
    QTcpSocket *_file_socket;

    QString _file_name;
    QString _file_name_client;

    static QString _my_name;

signals:
    void text_message_received(QString sender, QString message);
    void is_typing_received(QString sender);

    void init_receiving_file(QString file_name, qint64 file_size);
    void reject_receiving_file();

    void init_receiving_file_client(QString sender, QString ID, QString file_name, qint64 file_size);
    void reject_receiving_file_client(QString sender);

    void file_saved(QString path);
    void file_client_saved(QString path);

    void client_name_changed(QString old_name, QString client_name);
    void client_disconnected(QString client_name);

    void socket_disconnected();

    void file_accepted();
    void file_accepted_client();

    void friend_list(QHash<int, QHash<QString, int>> friend_list);

    void client_added_you(QString name, QString ID, int conversation_ID);

    void lookup_friend_result(QString name, int conversation_ID);

private slots:
    void on_disconnected();

    void on_ready_read();

    void file_connect();

    void on_new_connection();
};