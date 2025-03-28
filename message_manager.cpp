//
// Created by Daria on 28.03.2025.
//

#include "message_manager.h"
int MessageManager::nextMessageId = 1;

int MessageManager::generateMessageId() {
    return nextMessageId++;
}