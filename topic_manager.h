//
// Created by Daria on 28.03.2025.
//

#ifndef TOPIC_MANAGER_H
#define TOPIC_MANAGER_H

class TopicManager {
public:
    static int generateTopicId();

private:
    static int nextTopicId;
};

#endif // TOPIC_MANAGER_H