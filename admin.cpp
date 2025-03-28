//
// Created by Daria on 28.03.2025.
//

#include "admin.h"
#include <iostream>

using namespace std;

Admin::Admin(const wstring& name, const wstring& email) : User(name, email) {}

Admin::~Admin() = default;
void Admin::createMessage(const wstring& messageText) {
    wcout << L"Администратор " << getName() << L" Написал(а): " << messageText << '\n';
}
void Admin::deleteMessage(int messageId) {
    wcout << L"Администратор " << getName() << L" Удалил(а) сообщение " << messageId << '\n';
}

void Admin::banUser(const User& user) {
    wcout << L"Администратор " << getName() << L" Забанил(а) пользователя " << user.getName() << '\n';
}

void Admin::createTopic(const wstring& topicName) {
    wcout << L"Администратор " << getName() << L" Создал(а) тему: " << topicName << '\n';
}

void Admin::renameTopic(int topicId, const wstring& newName) {
    wcout << L"Администратор " << getName() << L" Переименовал(а) тему " << topicId << L" в " << newName << '\n';
}

void Admin::deleteTopic(int topicId) const {
    wcout << L"Администратор " << getName() << L" Удалил(а) тему " << topicId << '\n';
}

void Admin::modifyTopic(int topicId, const wstring& newName) const {
    wcout << L"Администратор " << getName() << L" Изменил(а) тему " << topicId << L" на " << newName << '\n';
}

void Admin::deleteAllTopics() const {
    wcout << L"Администратор " << getName() << L" Удалил(а) все темы." << '\n';
}

void Admin::modifyAllTopics(const wstring& newName) const {
    wcout << L"Администратор " << getName() << L" Изменил(а) все темы на " << newName << '\n';
}