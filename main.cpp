#include "user.h"
#include "moderator.h"
#include "admin.h"
#include "message_manager.h"
#include "topic_manager.h"
#include <iostream>

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
    sayori.deleteMessage(MessageManager::generateMessageId());
    sayori.deleteTopic(TopicManager::generateTopicId());
    sayori.modifyTopic(TopicManager::generateTopicId(), L"Пикник отменяется :(");
    sayori.renameTopic(TopicManager::generateTopicId(), L"Новая идея: книжный клуб!");

    // Демонстрация прав администратора
    monika.createTopic(L"Добро пожаловать в литературный клуб!");
    monika.createMessage(L"Рада видеть всех в нашем клубе! Давайте писать стихи!");
    monika.deleteMessage(MessageManager::generateMessageId());
    monika.banUser(yuri); // Бан Юри
    monika.renameTopic(TopicManager::generateTopicId(), L"Только лучшие стихи!");
    monika.deleteTopic(TopicManager::generateTopicId());
    monika.modifyTopic(TopicManager::generateTopicId(), L"Клуб закрыт на реконструкцию...");

    return 0;
}