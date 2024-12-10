// date 0f the Lab :- 09/
// Lab13:- Write a program to implement push and pop operations on a queue usinglinked list

#include <iostream>
using namespace std;

// Structure representing a node in the queue (linked list)
struct QNode {
    int data;       // Data stored in the node
    QNode* next;    // Pointer to the next node in the queue

    // Constructor to initialize the node with given data
    QNode(int d) {
        data = d;        // Set the node's data
        next = NULL;     // Initialize the next pointer to NULL
    }
};

// Structure representing the Queue using linked list
struct Queue {
    QNode *front, *rear;  // Pointers to the front and rear of the queue

    // Constructor to initialize an empty queue
    Queue() {
        front = rear = NULL;   // Initially, both front and rear are NULL
    }

    // Function to add an element (enqueue) to the queue
    void enQueue(int x) {
        // Create a new node with the given data
        QNode* temp = new QNode(x);

        // If the queue is empty, both front and rear point to the new node
        if (front == NULL) {
            front = rear = temp;
            return;
        }

        // If the queue is not empty, link the new node at the rear of the queue
        rear->next = temp;  // Link the new node to the last node
        rear = temp;        // Move rear to point to the new last node
    }

    // Function to remove an element (dequeue) from the front of the queue
    void deQueue() {
        // If the queue is empty, nothing to dequeue
        if (front == NULL) {
            cout << "Queue is empty. Nothing to dequeue." << endl;
            return;
        }

        // Store the current front node temporarily
        QNode* temp = front;
        front = front->next;  // Move the front pointer to the next node

        // If front becomes NULL, the queue is now empty, so rear should be NULL as well
        if (front == NULL)
            rear = NULL;

        // Free the memory of the dequeued node
        delete temp;
    }
};

// Driven Program to test the queue operations
int main() {
    // Create a queue
    Queue q;

    // Enqueue elements into the queue
    q.enQueue(10);
    q.enQueue(20);

    // Dequeue elements from the queue
    q.deQueue();  // Removes 10
    q.deQueue();  // Removes 20

    // Enqueue more elements
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);

    // Dequeue one element
    q.deQueue();  // Removes 30

    // Display the front and rear of the queue
    if (q.front != NULL)  // Check if the queue is not empty
        cout << "Queue Front: " << q.front->data << endl;
    if (q.rear != NULL)   // Check if the queue is not empty
        cout << "Queue Rear: " << q.rear->data << endl;

    return 0;
}



/*OUtput

Queue Front: 40
Queue Rear: 50

*/
