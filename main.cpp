#include "user.h"
#include "moderator.h"
#include "admin.h"
#include "message_manager.h"
#include "topic_manager.h"
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");

    Admin monika(L"Моника", L"monika@literatureclub.com");
    Moderator sayori(L"Саёри", L"sayori@literatureclub.com");
    User yuri(L"Юри", L"yuri@literatureclub.com");
    User natsuki(L"Нацуки", L"natsuki@literatureclub.com");

    // Демонстрация прав обычных пользователей
    yuri.createTopic(L"Тайны старых книг");
    yuri.createMessage(L"Недавно я нашла старинную книгу с очень странными стихами...");

    natsuki.createTopic(L"Манга - это искусство!");
    natsuki.createMessage(L"Почему все считают мангу детской ерундой? Это настоящее искусство!");

    // Демонстрация прав модератора
    sayori.createTopic(L"Давайте устроим пикник!");
    sayori.createMessage(L"Может, сходим на пикник в парк? Будет весело!");
    if (MessageManager::messageExists(1)) {
        sayori.deleteMessage(1);
    }
    if (TopicManager::topicExists(1)) {
        sayori.deleteTopic(1);
    }
    if (TopicManager::topicExists(2)) {
        sayori.modifyTopic(2, L"Пикник отменяется:(");
        sayori.renameTopic(2, L"Новая идея: книжный клуб!");
    }

    // Демонстрация прав администратора
    monika.createTopic(L"Добро пожаловать в литературный клуб!");
    monika.createMessage(L"Рада видеть всех в нашем клубе! Давайте писать стихи!");
    if (MessageManager::messageExists(2)) {
        monika.deleteMessage(2);
    }
    monika.banUser(yuri);
    if (TopicManager::topicExists(3)) {
        monika.renameTopic(3, L"Только лучшие стихи!");
        monika.deleteTopic(3);
        monika.modifyTopic(3, L"Клуб закрыт на реконструкцию...");
    }

    return 0;
}