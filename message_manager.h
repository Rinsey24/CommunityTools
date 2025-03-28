//
// Created by Daria on 28.03.2025.
//

#ifndef MESSAGE_MANAGER_H
#define MESSAGE_MANAGER_H

class MessageManager {
public:
    static int generateMessageId();
    static bool messageExists(int messageId);

private:
    static int nextMessageId;
};

#endif // MESSAGE_MANAGER_H