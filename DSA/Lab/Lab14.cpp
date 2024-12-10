
// Program to traverse a Binary search tree in Pre-order, In-order and Post-order. 

#include <iostream>
using namespace std;

/* A binary tree node structure with data, left, and right child pointers */
struct Node {
    int data;           // Node's value
    struct Node* left;  // Pointer to the left child
    struct Node* right; // Pointer to the right child
};

/* Function to perform Post-order traversal of the tree */
void Postorder(struct Node* node) {
    if (node == NULL)
        return;

    // First recur on left subtree
    Postorder(node->left);

    // Then recur on right subtree
    Postorder(node->right);

    // Now deal with the node (print the node's data)
    cout << node->data << " ";
}

/* Function to perform In-order traversal of the tree */
void Inorder(struct Node* node) {
    if (node == NULL)
        return;

    // First recur on left child
    Inorder(node->left);

    // Then print the data of the node
    cout << node->data << " ";

    // Now recur on right child
    Inorder(node->right);
}

/* Function to perform Pre-order traversal of the tree */
void Preorder(struct Node* node) {
    if (node == NULL)
        return;

    // First print the data of the node
    cout << node->data << " ";

    // Then recur on left subtree
    Preorder(node->left);

    // Now recur on right subtree
    Preorder(node->right);
}

/* Function to insert a new node into the binary tree */
struct Node* Insert(int data) {
    // Allocate memory for a new node
    struct Node* root = new Node;
    root->data = data;        // Set the data
    root->left = root->right = NULL;  // Initialize left and right children as NULL
    return root;
}

/* Driver program to test the traversal functions */
int main() {
    // Create the root node and the rest of the tree
    struct Node* root = Insert(1);           // Root node with data 1
    root->left = Insert(2);                  // Left child of root with data 2
    root->right = Insert(3);                 // Right child of root with data 3
    root->left->left = Insert(4);            // Left child of node 2 with data 4
    root->left->right = Insert(5);           // Right child of node 2 with data 5

    // Perform Pre-order traversal
    cout << "\nPreorder traversal of binary tree is \n";
    Preorder(root);

    // Perform In-order traversal
    cout << "\nInorder traversal of binary tree is \n";
    Inorder(root);

    // Perform Post-order traversal
    cout << "\nPostorder traversal of binary tree is \n";
    Postorder(root);

    return 0;  // End of the program
}


/*OUTPUT

Preorder traversal of binary tree is
1 2 4 5 3
Inorder traversal of binary tree is
4 2 5 1 3
Postorder traversal of binary tree is
4 5 2 3 1



*/
