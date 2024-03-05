#ifndef STACK_DYNAMICLINKEDQUEUE_H
#define STACK_DYNAMICLINKEDQUEUE_H

#include "../Queue.h"

class DynamicLinkedQueue : public Queue {
private:
    struct Node {
        int data;
        Node *next;

        Node(int val) : data(val), next(nullptr) {}
    };

    Node *frontNode; // Pointer to the front of the queue
    Node *rearNode;  // Pointer to the rear of the queue
    size_t queueSize; // Size of the queue

public:
    DynamicLinkedQueue() : frontNode(nullptr), rearNode(nullptr), queueSize(0) {}

    // Enqueue an element to the back of the queue
    void enqueue(int value) override;

    // Dequeue an element from the front of the queue
    int dequeue() override;

    // Get the front element without removing it
    int peek() const override;

    // Check if the queue is empty
    bool isEmpty() const override;

    // Get the size of the queue
    size_t size() const override;

    // Destructor to free memory
    ~DynamicLinkedQueue() override;

    bool isFull() const override;
};


#endif //STACK_DYNAMICLINKEDQUEUE_H