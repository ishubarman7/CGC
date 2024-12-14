
//Lab.10 :-    Write a menu driven program to perform following insertion operations in a single linked list:
//                i.	Insertion atbeginning
//                ii.	Insertion atend
//                iii.	Insertion after a givennode
//                iv.	Traversing a linkedlist


#include<iostream>
using namespace std;

struct node {
	int data;
	node *next;
};

class list {
private:
	node *head, *tail;
public:
	list() {
		head = NULL;
		tail = NULL;
	}
	void createnode(int value) {
		node *temp = new node;
		temp->data = value;
		temp->next = NULL;

		if (head == NULL) {
			head = temp;
			tail = temp;
		} else {
			tail->next = temp;
			tail = temp;
		}
	}

	void display() {
		node *temp = head;
		while (temp != NULL) {
			cout << temp->data << "\t";
			temp = temp->next;
		}
		cout << endl;
	}

	void insert_start(int value) {
		node *temp = new node;
		temp->data = value;
		temp->next = head;
		head = temp;
	}

	void insert_position(int pos, int value) {
		node *pre = new node;
		node *cur = new node;
		node *temp = new node;

		cur = head;
		for (int i = 1; i < pos; i++) {
			pre = cur;
			cur = cur->next;
		}

		temp->data = value;
		pre->next = temp;
		temp->next = cur;
	}
};

int main() {
	list obj;
	obj.createnode(25);
	obj.createnode(50);
	obj.createnode(90);
	obj.createnode(40);

	cout << "\n ---------------Traversing Linked List\n";
	obj.display();

	cout << "\n -----------------Inserting At End\n";
	obj.createnode(55);
	obj.display();

	cout << "\n ----------------Inserting At Start\n";
	obj.insert_start(50);
	obj.display();

	cout << "\n -------------Inserting At Particular Position\n";
	obj.insert_position(5, 60);
	obj.display();

	return 0;
}
/*OUTPUT

 ---------------Traversing Linked List
25      50      90      40

 -----------------Inserting At End
25      50      90      40      55

 ----------------Inserting At Start
50      25      50      90      40      55

 -------------Inserting At Particular Position
50      25      50      90      60      40      55

*/