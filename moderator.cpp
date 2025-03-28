//
// Created by Daria on 28.03.2025.
//

#include "moderator.h"
#include <iostream>

using namespace std;

Moderator::Moderator(const wstring& name, const wstring& email) : User(name, email) {}

Moderator::~Moderator() = default;
void Moderator::createTopic(const wstring& topicName) {
    wcout << L"Администратор " << getName() << L" Создал(а) тему: " << topicName << '\n';
}
void Moderator::deleteTopic(int topicId) const {
    wcout << L"Модератор " << getName() << L" Удалил(а) тему " << topicId << '\n';
}

void Moderator::modifyTopic(int topicId, const wstring& newName) const {
    wcout << L"Модератор " << getName() << L" Изменил(а) тему " << topicId << L" на " << newName << '\n';
}

void Moderator::deleteAllTopics() const {
    wcout << L"Модератор " << getName() << L" Удалил(а) все темы." << '\n';
}

void Moderator::modifyAllTopics(const wstring& newName) const {
    wcout << L"Модератор " << getName() << L" Изменил(а) все темы на " << newName << '\n';
}
void Moderator::createMessage(const wstring& messageText) {
    wcout << L"Модератор " << getName() << L" Написал(а): " << messageText << '\n';
}
void Moderator::deleteMessage(int messageId) {
    wcout << L"Модератор " << getName() << L" Удалил(а) сообщение " << messageId << '\n';
}

void Moderator::renameTopic(int topicId, const wstring& newName) {
    wcout << L"Модератор " << getName() << L" Переименовал(а) тему " << topicId << L" в " << newName << '\n';
}