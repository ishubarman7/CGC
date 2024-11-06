
//Lab12:-   Write a menu driven program to perform following deletion operations in a single linked list:
//           i.	Deletion atbeginning
//           ii. Deletion atend
//           iii. Deletion after a givennode


#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

class list {
private:
    node* head;
    node* tail;

public:
    // Constructor
    list() {
        head = NULL;
        tail = NULL;
    }
    // Function to create a node and insert it at the end of the list
    void createnode(int value) {
        node* temp = new node;  // Allocate memory for a new node
        temp->data = value;     // Assign value to the node
        temp->next = NULL;      // Set next pointer to NULL

        if (head == NULL) {
            // If the list is empty, set both head and tail to the new node
            head = temp;
            tail = temp;
        } else {
            // If the list already has nodes, append the new node at the end
            tail->next = temp;
            tail = temp;
        }
    }

    // Function to display the elements of the list
    void display() {
        node* temp = head;  // Start from the head
        while (temp != NULL) {
            cout << temp->data << "\t";  // Print node data
            temp = temp->next;  // Move to the next node
        }
        cout << endl;
    }

    // Function to delete the first node of the list
    void delete_first() {
        if (head == NULL) {
            cout << "List is empty, nothing to delete!" << endl;
            return;
        }

        node* temp = head;   // Temporary node pointing to head
        head = head->next;   // Move head to the next node
        delete temp;         // Delete the old head
    }

    // Function to delete the last node of the list
    void delete_last() {
        if (head == NULL) {
            cout << "List is empty, nothing to delete!" << endl;
            return;
        }

        if (head->next == NULL) {  // If there's only one node
            delete head;
            head = tail = NULL;
            return;
        }

        node* current = head;
        node* previous = NULL;

        while (current->next != NULL) {
            previous = current;
            current = current->next;
        }

        tail = previous;        // Update tail to the second-last node
        tail->next = NULL;      // Remove the last node
        delete current;         // Free memory of the last node
    }

    // Function to delete a node at a given position (1-based index)
    void delete_position(int pos) {
        if (head == NULL) {
            cout << "List is empty, nothing to delete!" << endl;
            return;
        }

        if (pos == 1) {
            delete_first();
            return;
        }

        node* current = head;
        node* previous = NULL;

        for (int i = 1; i < pos; i++) {
            if (current == NULL) {
                cout << "Position out of range" << endl;
                return;
            }
            previous = current;
            current = current->next;
        }

        if (current == NULL) {
            cout << "Position out of range" << endl;
            return;
        }

        previous->next = current->next;  // Unlink the node
        delete current;                  // Free memory of the deleted node
    }
};

int main() {
    list obj;
    obj.createnode(25);
    obj.createnode(50);
    obj.createnode(90);
    obj.createnode(40);
    obj.createnode(60);
    obj.createnode(70);
    obj.createnode(30);
    obj.createnode(80);
    obj.createnode(10);

    cout << "\n------------Displaying All Nodes------------\n";
    obj.display();

    cout << "\n-----------Deleting First Node------------\n";
    obj.delete_first();
    obj.display();

    cout << "\n-----------Deleting Last Node------------\n";
    obj.delete_last();
    obj.display();

    cout << "\n--------Deleting Node at Position 4--------\n";
    obj.delete_position(4);
    obj.display();

    return 0;
}

/*OUTPUT

------------Displaying All Nodes------------
25      50      90      40      60      70      30      80      10

-----------Deleting First Node------------
50      90      40      60      70      30      80      10

-----------Deleting Last Node------------
50      90      40      60      70      30      80

--------Deleting Node at Position 4--------
50      90      40      70      30      80

*/



