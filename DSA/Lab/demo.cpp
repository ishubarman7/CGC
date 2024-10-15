#include <iostream>
using namespace std;

int queue[20], n, front = 0, rear = 0;

void Insert(int val) {
    if (rear == n) {
        cout << "Queue Overflow" << endl;
    } else {
        rear++;
        queue[rear] = val;
    }
}

void Delete() {
    // if queue is empty
    if (front == rear) {
        cout << "\nQueue is empty\n";
        return;
    }

    // shift all the elements from index 1 till rear to the left by one
    for (int i = 0; i < rear; i++) {
        queue[i] = queue[i + 1];
    }

    // decrement rear
    rear--;
}

void Display() {
    if (front == rear) {
        cout << "\nQueue is Empty\n";
        return;
    }

    // traverse front to rear and print elements
    for (int i = 1; i <= rear; i++) {
        cout << "\t" << queue[i];
    }
    cout << endl;
}

int main(void) {
    // Create a queue
    cout << "Enter size of queue: ";
    cin >> n;

    // Inserting elements into the queue
    Insert(20);
    Insert(30);
    Insert(40);
    Insert(50);

    cout << "\nAfter insertion, queue =\n";
    Display();

    // Insert more elements in the queue
    Insert(60);

    cout << "\nAfter inserting 60, queue =\n";
    Display();

    // Deleting elements from the queue
    Delete();
    Delete();

    cout << "\nAfter deletion of 2 nodes, queue =\n";
    Display();

    return 0;
}











