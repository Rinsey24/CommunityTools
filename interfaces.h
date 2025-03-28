//
// Created by Daria on 28.03.2025.
//

#ifndef INTERFACES_H
#define INTERFACES_H

#include "user.h"
#include <string>

class DeleteMessages {
public:
    virtual void deleteMessage(int messageId) = 0;
    virtual ~DeleteMessages() = default;
};

class BanUsers {
public:
    virtual void banUser(const User& user) = 0;
    virtual ~BanUsers() = default;
};

class CreateTopics {
public:
    virtual void createTopic(const wstring& topicName) = 0;
    virtual ~CreateTopics() = default;
};

class RenameTopics {
public:
    virtual void renameTopic(int topicId, const wstring& newName) = 0;
    virtual ~RenameTopics() = default;
};

class CreateMessages {
public:
    virtual void createMessage(const wstring& messageText) = 0;
    virtual ~CreateMessages() = default;
};

#endif // INTERFACES_H