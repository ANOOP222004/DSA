// //method 1
// #include<iostream>
// using namespace std;

// struct node {
//     int data;            // Data part of the node
//     struct node *next;   // Pointer to the next node
// } *first = NULL;         // Initialize the first pointer to NULL

// // Function to create a linked list from an array
// void create(int a[], int n) {
//     struct node *t, *last;
//     first = new node;    // Create the first node
//     first->data = a[0];  // Initialize the first node's data
//     first->next = NULL;  // First node's next pointer is NULL (end of list)
//     last = first;        // Last points to the first node

//     // Loop to create the rest of the nodes
//     for (int i = 1; i < n; i++) {  // Start from 1 since first is initialized with a[0]
//         t = new node;              // Create a new node
//         t->data = a[i];            // Set the new node's data
//         t->next = NULL;            // New node's next is NULL
//         last->next = t;            // Link the last node to the new node
//         last = t;                  // Update last to point to the new node
//     }
// }

// // Function to display the linked list
// void display(struct node *p) {  // Function accepts a pointer to traverse
//     while (p != NULL) {
//         cout << p->data << " ";  // Display node data
//         p = p->next;  // Move to the next node
//     }
// }

// int main() {
//     int a[] = {3, 5, 7, 10, 15};  // Array to create the linked list from
//     create(a, 5);                 // Create the linked list
//     display(first);               // Display the linked list
//     return 0;
// }

//method 2 using recursion
#include<iostream>
using namespace std;

struct node {
    int data;            // Data part of the node
    struct node *next;   // Pointer to the next node
} *first = NULL;         // Initialize the first pointer to NULL

// Function to create a linked list from an array
void create(int a[], int n) {
    struct node *t, *last;
    first = new node;    // Create the first node
    first->data = a[0];  // Initialize the first node's data
    first->next = NULL;  // First node's next pointer is NULL (end of list)
    last = first;        // Last points to the first node

    // Loop to create the rest of the nodes
    for (int i = 1; i < n; i++) {  // Start from 1 since first is initialized with a[0]
        t = new node;              // Create a new node
        t->data = a[i];            // Set the new node's data
        t->next = NULL;            // New node's next is NULL
        last->next = t;            // Link the last node to the new node
        last = t;                  // Update last to point to the new node
    }
}

// Recursive function to display the linked list
void display(struct node *p) {
    if (p != NULL) {            // Base case: if p is NULL, stop recursion
        cout << p->data << " ";  // Print current node's data
        display(p->next);        // Recursive call with the next node
    }
}

int main() {
    int a[] = {3, 5, 7, 10, 15};  // Array to create the linked list from
    create(a, 5);                 // Create the linked list
    display(first);               // Display the linked list using recursion
    return 0;
}
