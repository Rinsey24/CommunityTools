//
// Created by Daria on 28.03.2025.
//

#ifndef MODERATOR_H
#define MODERATOR_H

#include "user.h"
#include "interfaces.h"
using namespace std;
class Moderator : public User, public DeleteMessages, public RenameTopics, public CreateTopics, public CreateMessages{
public:
    Moderator(const wstring& name, const wstring& email);
    ~Moderator() override;

    void deleteTopic(int topicId) const;
    void modifyTopic(int topicId, const wstring& newName) const;
    void deleteAllTopics() const;
    void modifyAllTopics(const wstring& newName) const;
    void createMessage(const wstring& messageText) override;
    void deleteMessage(int messageId) override;
    void createTopic(const wstring& topicName) override;
    void renameTopic(int topicId, const wstring& newName) override;
};

#endif // MODERATOR_H