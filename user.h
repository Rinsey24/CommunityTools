//
// Created by Daria on 28.03.2025.
//

#ifndef USER_H
#define USER_H

#include <string>
using namespace std;
class User {
public:
    User(wstring name, wstring email);

    [[nodiscard]] wstring getName() const;
    [[nodiscard]] wstring getEmail() const;

    void createTopic(const wstring& topicName);
    void createMessage(const wstring& messageText);

private:
    wstring name;
    wstring email;
};

#endif // USER_H