#include "chat_protocol.h"
#include <QTime>
#include <QIODevice>
#include <QDataStream>
#include <QFileInfo>
#include <QFile>
#include <QStringList>

chat_protocol::chat_protocol(QWidget *parent)
    : QMainWindow(parent)
{
}

QByteArray chat_protocol::get_data(message_type type, QString data)
{
    QByteArray byte;

    QDataStream out(&byte, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_0);

    out << type << data;

    return byte;
}

QByteArray chat_protocol::set_text_message(QString sender, QString receiver, QString message)
{
    QByteArray byte;

    QDataStream out(&byte, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_0);

    out << text << sender << receiver << message;

    return byte;
}

QByteArray chat_protocol::set_is_typing_message(QString sender, QString receiver)
{
    QByteArray byte;

    QDataStream out(&byte, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_0);

    out << is_typing << sender << receiver;

    return byte;
}

QByteArray chat_protocol::set_name_message(QString my_name, QString name)
{
    QByteArray byte;

    QDataStream out(&byte, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_0);

    out << set_name << my_name << name;

    return byte;
}

QByteArray chat_protocol::set_init_sending_file_message(QString filename)
{
    QByteArray byte;

    QDataStream out(&byte, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_0);

    QFileInfo info(filename);

    out << init_sending_file << info.fileName() << info.size();

    return byte;
}

QByteArray chat_protocol::set_init_sending_file_message_client(QString sender, QString receiver, QString filename)
{
    QByteArray byte;

    QDataStream out(&byte, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_0);

    QFileInfo info(filename);

    out << init_sending_file_client << sender << receiver << info.fileName() << info.size();

    return byte;
}

QByteArray chat_protocol::set_accept_file_message()
{
    return get_data(accept_sending_file, "");
}

QByteArray chat_protocol::set_accept_file_message_client(QString receiver, int port)
{
    QByteArray byte;

    QDataStream out(&byte, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_0);

    out << accept_sending_file_client << receiver << port;

    return byte;
}

QByteArray chat_protocol::set_reject_file_message()
{

    return get_data(reject_sending_file, "");
}

QByteArray chat_protocol::set_reject_file_message_client(QString sender, QString receiver)
{
    QByteArray byte;

    QDataStream out(&byte, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_0);

    out << reject_sending_file_client << sender << receiver;

    return byte;
}

QByteArray chat_protocol::set_file_message(QString file_name)
{
    QByteArray byte;

    QFile file(file_name);
    if (file.open(QIODevice::ReadOnly))
    {
        QDataStream out(&byte, QIODevice::WriteOnly);
        out.setVersion(QDataStream::Qt_6_0);

        QFileInfo info(file_name);

        out << send_file << info.fileName() << info.size() << file.readAll();

        file.close();
    }

    return byte;
}

QByteArray chat_protocol::set_file_message_client(QString filename, QString sender)
{
    QByteArray byte;

    QFile file(filename);
    if (file.open(QIODevice::ReadOnly))
    {
        QDataStream out(&byte, QIODevice::WriteOnly);
        out.setVersion(QDataStream::Qt_6_0);

        QFileInfo info(filename);

        out << send_file_client << info.fileName() << info.size() << file.readAll() << sender;

        file.close();
    }

    return byte;
}

void chat_protocol::load_data(QByteArray data)
{
    QDataStream in(&data, QIODevice::ReadOnly);
    in.setVersion(QDataStream::Qt_6_0);

    in >> _type;

    switch (_type)
    {
    case text:
        in >> _sender >> _receiver >> _message;

        break;

    case set_name:
        in >> _name;

        break;

    case is_typing:
        in >> _sender >> _receiver;

        break;

    case init_sending_file:
        in >> _file_name >> _file_size;

        break;

    case init_sending_file_client:
        in >> _sender >> _file_name >> _file_size;

        break;

    case send_file:
        in >> _file_name >> _file_size >> _file_data;

        break;

    case send_file_client:
        in >> _file_name >> _file_size >> _file_data >> _sender;

        break;

    case new_client:
        in >> _client_name;

        break;

    case client_disconnected:
        in >> _client_name;

        break;

    case clients_list:
        in >> _my_name >> _clients_name >> _port;

        break;

    case client_new_name:
        in >> _old_name >> _client_name;

        break;

    case accept_sending_file_client:
        in >> _port_transfer;

        break;

    case reject_sending_file_client:
        in >> _sender;

        break;

    case first_client:
        in >> _my_name >> _port_transfer;

    default:
        break;
    }
}

chat_protocol::message_type chat_protocol::type() const
{
    return _type;
}

const QString &chat_protocol::message() const
{
    return _message;
}

const QString &chat_protocol::name() const
{
    return _name;
}

const QString &chat_protocol::file_name() const
{
    return _file_name;
}

const qint64 &chat_protocol::file_size() const
{
    return _file_size;
}

const QByteArray &chat_protocol::file_data() const
{
    return _file_data;
}

const QString &chat_protocol::client_name() const
{
    return _client_name;
}

const QString &chat_protocol::receiver() const
{
    return _receiver;
}

const QString &chat_protocol::sender() const
{
    return _sender;
}

const QString &chat_protocol::old_name() const
{
    return _old_name;
}

const QString &chat_protocol::my_name() const
{
    return _my_name;
}

const QMap<QString, QString> &chat_protocol::clients_name() const
{
    return _clients_name;
}

const int &chat_protocol::port() const
{
    return _port;
}

const int &chat_protocol::port_transfer() const
{
    return _port;
}