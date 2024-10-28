
// Write a program to implement push and pop operations on a stack using linked list

#include <bits/stdc++.h>
using namespace std;

// Declare linked list node
struct Node {
    int data;
    struct Node* link;
};

struct Node* top = NULL;

// Utility function to add an element in the stack
void push(int data) {
    // create new node temp and allocate memory
    struct Node* temp = new Node();

    // check if stack (heap) is full. Then inserting an element would lead to stack overflow
    if (!temp) {
        cout << "\nHeap Overflow";
        exit(1);
    }

    // initialize data into temp's data field
    temp->data = data;

    // put top pointer reference into temp's link
    temp->link = top;

    // make temp the new top of the stack
    top = temp;
}

void pop() {
    struct Node* temp;

    // check for stack underflow
    if (top == NULL) {
        cout << "\nStack Underflow" << endl;
        exit(1);
    } else {
        // top is assigned to temp
        temp = top;

        // assign second node to top
        top = top->link;

        // destroy connection between first and second
        temp->link = NULL;

        // release memory of top node
        delete temp;
    }
}

void display() {
    struct Node* temp;

    // check for stack underflow
    if (top == NULL) {
        cout << "\nStack is empty";
        exit(1);
    } else {
        temp = top;
        while (temp != NULL) {
            // print node data
            cout << temp->data << " ";

            // move to the next node
            temp = temp->link;
        }
    }
}

int main() {
    // push the elements onto the stack
    push(11);
    push(22);
    push(33);
    push(44);
    push(55);
    push(66);

    cout << "\nStack elements after PUSH operation: ";
    // display stack elements
    display();

    // delete top element of the stack
    pop();
    pop();

    // display stack elements after popping
    cout << "\nStack elements after POP operation: ";
    display();

    return 0;
}



/*OUTPUT

Stack elements after PUSH operation: 66 55 44 33 22 11
Stack elements after POP operation: 44 33 22 11

*/




