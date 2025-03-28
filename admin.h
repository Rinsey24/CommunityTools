//
// Created by Daria on 28.03.2025.
//

#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"
#include "interfaces.h"
using namespace std;
class Admin : public User, public DeleteMessages, public BanUsers, public RenameTopics, public CreateTopics, public CreateMessages {
public:
    Admin(const wstring& name, const wstring& email);
    ~Admin() override;

    void deleteMessage(int messageId) override;
    void banUser(const User& user) override;
    void renameTopic(int topicId, const wstring& newName) override;
    void createTopic(const wstring& topicName) override;
    void createMessage(const wstring& messageText) override;
    void deleteTopic(int topicId) const;
    void modifyTopic(int topicId, const wstring& newName) const;
    void deleteAllTopics() const;
    void modifyAllTopics(const wstring& newName) const;
};

#endif // ADMIN_H