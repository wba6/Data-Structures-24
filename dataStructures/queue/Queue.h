
#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H
#include <cstddef>
#include "dataClass/Message.h"

enum queueType {
    dynamicLinkedQueue,
    staticCircleQueue
};

class Queue {
protected:
    Queue(){};

public:

    /*
     * creates a new type of stack
     *
     * @param stackType type : the type of stack to be returned
     * @return void
     * */
    static Queue *Create(queueType type);

    // Enqueue an element to the back of the queue
    virtual int enqueue(const char *value, const int carNumber) = 0;

    // Dequeue an element from the front of the queue
    virtual const Message dequeue() = 0;

    // Get the front element without removing it
    virtual const Message head() const = 0;

    // Get the front element without removing it
    virtual const Message tail() const = 0;

    // Check if the queue is empty
    virtual bool isEmpty() const = 0;

    // Check if the queue is full
    virtual bool isFull() const = 0;

    // Get the size of the queue
    virtual size_t size() const = 0;

    //print out the whole queue
    virtual int echo() const = 0;

    // Destructor to free memory
    virtual ~Queue(){};
};


#endif //STACK_QUEUE_H
