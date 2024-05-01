#pragma once

#include <QtWidgets>
#include <QtCore>
#include <QtMultimedia>

class chat_protocol : public QMainWindow
{
    Q_OBJECT
public:
    chat_protocol(QWidget *parent = nullptr);

    enum message_type
    {
        text,
        is_typing,
        set_name,

        init_sending_file,
        init_sending_file_client,

        accept_sending_file,
        accept_sending_file_client,

        reject_sending_file,
        reject_sending_file_client,

        send_file,
        send_file_client,

        new_client,
        clients_list,
        client_new_name,
        client_disconnected,

        first_client
    };

    QByteArray set_text_message(QString sender, QString receiver, QString message);
    QByteArray set_is_typing_message(QString sender, QString receiver);
    QByteArray set_name_message(QString name);

    QByteArray set_init_sending_file_message(QString filename);
    QByteArray set_init_sending_file_message_client(QString sender, QString filename, qint64 file_size);

    QByteArray set_accept_file_message();
    QByteArray set_accept_file_message_client(int port);

    QByteArray set_reject_file_message();
    QByteArray set_reject_file_message_client(QString sender, QString receiver);

    QByteArray set_file_message(QString filename);
    QByteArray set_file_message_client(int port);

    QByteArray set_new_client_message(QString client_name);
    QByteArray set_clients_list_message(QString client_name, QHash<QString, QString> other_clients, int port);
    QByteArray set_client_name_message(QString old_name, QString client_name);
    QByteArray set_client_disconnected_message(QString client_name);

    QByteArray set_first_client_message(QString name, int port_transfer);

    void load_data(QByteArray data);

    message_type type() const;
    const QString &message() const;
    const QString &name() const;
    const QString &original_name() const;
    const QString &file_name() const;
    const QString &file_name_client() const;
    const qint64 &file_size() const;
    const qint64 &file_size_client() const;
    const QByteArray &file_data() const;

    const QString &client_name() const;
    const QHash<QString, QString> &other_clients() const;

    const QString &receiver() const;
    const QString &sender() const;

    const QString &receiver_typing() const;
    const QString &sender_typing() const;

    const int &port() const;

private:
    QByteArray get_data(message_type type, QString data);

    message_type _type;
    QString _message;
    QString _name;
    QString _is_typing;

    int _port;

    QString _file_name;
    QString _file_name_client;
    qint64 _file_size;
    qint64 _file_size_client;
    QByteArray _file_data;

    QString _client_name;
    QString _receiver;
    QString _sender;
    QString _receiver_typing;
    QString _sender_typing;
    QString _original_name;
    QHash<QString, QString> _other_clients;
};