#pragma once

#include <QtWidgets>
#include <QtCore>
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

        file,

        client_new_name,
        client_disconnected,
        client_connected,

        added_you,
        lookup_friend,
        create_conversation,
        save_message,

        audio,
        save_data,

        sign_up,
        login_request,

        delete_message,

        new_group,
        added_to_group,

        group_is_typing,
        group_text,
        group_file,
        group_audio
    };

    QByteArray set_text_message(const QString &sender, const QString &receiver, const QString &message, const QString &time);
    QByteArray set_is_typing_message(const QString &sender, const QString &receiver);
    QByteArray set_name_message(const QString &name);

    QByteArray set_file_message(const QString &sender, const QString &file_name, const QByteArray &file_data, const QString &time);
    QByteArray set_audio_message(const QString &sender, const QString &audio_name, const QByteArray &audio_data, const QString &time);

    QByteArray set_client_name_message(const QString &old_name, const QString &client_name);
    QByteArray set_client_disconnected_message(const QString &client_name);

    QByteArray set_added_you_message(const int &conversation_ID, const QString &name, const QString &ID, const QString &receiver);

    QByteArray set_lookup_friend_message(const int &conversation_ID, const QString &ID, bool true_or_false);

    QByteArray set_client_connected_message(const QString &client_name);

    QByteArray set_online_client_message(QList<QString> &names);

    QByteArray set_login_message(const QString &hashed_password, bool true_or_false, const QString &full_name, const QHash<int, QHash<QString, int>> &friend_list, const QList<QString> &online_friends, const QHash<int, QVector<QString>> &messages, const QHash<int, QHash<QString, QByteArray>> &binary_data);

    QByteArray set_delete_message(const int &conversation_ID, const QString &sender, const QString &time);

    QByteArray set_new_group_message(const int &group_ID);

    QByteArray set_added_to_group_message(const int &group_ID, const QString &adm, const QStringList &group_members, const QString &group_name);

    void load_data(const QByteArray &data);

    message_type type() const;

    const QString &message() const;
    const QString &name() const;

    const QString &original_name() const;

    const QString &file_name() const;
    const qint64 &file_size() const;
    const QByteArray &file_data() const;
    const QString &file_sender() const;
    const QString &file_receiver() const;

    const QString &client_name() const;
    const QHash<QString, QString> &other_clients() const;

    const QString &receiver() const;
    const QString &sender() const;

    const QString &receiver_typing() const;
    const QString &sender_typing() const;

    const QString &clients_ID() const;

    const QString &participant1() const;
    const int &participant1_ID() const;
    const QString &participant2() const;
    const int &participant2_ID() const;

    const int &conversation_ID() const;

    const QString &audio_name() const;
    const QString &audio_sender() const;
    const QString &audio_receiver() const;
    const QString &data_type() const;
    const QByteArray &audio_data() const;

    const QString &last_name() const;
    const QString &first_name() const;
    const QString &password() const;
    const QString &secret_question() const;
    const QString &secret_answer() const;

    const QString &time() const;

    const QString &adm() const;
    const QStringList &members() const;
    const QString &group_name() const;

private:
    QByteArray get_data(message_type type, const QString &data);

    message_type _type;
    QString _message;
    QString _name;
    QString _is_typing;

    int _port;

    QString _file_name;
    qint64 _file_size;
    QByteArray _file_data;
    QString _file_sender;
    QString _file_receiver;

    QString _client_name;
    QString _receiver;
    QString _sender;

    QString _receiver_typing;
    QString _sender_typing;

    QString _original_name;
    QHash<QString, QString> _other_clients;

    QString _client_ID;

    QString _participant1;
    int _participant1_ID;
    QString _participant2;
    int _participant2_ID;

    int _conversation_ID;

    QString _audio_name;
    QString _audio_sender;
    QString _audio_receiver;
    QByteArray _audio_data;
    QString _data_type;

    QString _last_name;
    QString _first_name;
    QString _password;
    QString _secret_question;
    QString _secret_answer;

    QString _time;

    QString _adm;
    QStringList _members;
    QString _group_name;
};