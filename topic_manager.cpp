//
// Created by Daria on 28.03.2025.
//

#include "topic_manager.h"
int TopicManager::nextTopicId = 1;

int TopicManager::generateTopicId() {
    return nextTopicId++;
}