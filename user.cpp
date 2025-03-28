//
// Created by Daria on 28.03.2025.
//
#include "user.h"
#include <utility>
#include <iostream>

using namespace std;

User::User(wstring name, wstring email) : name(move(name)), email(move(email)) {}

wstring User::getName() const {
    return name;
}

wstring User::getEmail() const {
    return email;
}

void User::createTopic(const wstring& topicName) const {
    wcout << L"Пользователь " << getName() << L" Создал(а) тему: " << topicName << '\n';
}

void User::createMessage(const wstring& messageText) const {
    wcout << L"Пользователь " << getName() << L" Написал(а): " << messageText << '\n';
}