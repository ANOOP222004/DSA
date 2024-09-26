#include<iostream>
using namespace std;

struct node {
    int data;             // Data of the node
    struct node *next;    // Pointer to the next node
} *first = NULL, *last = NULL;  // Initialize the first and last pointers to NULL

// Function to create a linked list from an array
void create(int a[], int n) {
    struct node *t;  
    first = new node;       // Create the first node
    first->data = a[0];     // Assign data to the first node
    first->next = NULL;     // Set the next pointer to NULL
    last = first;           // Initialize last pointer to first

    for (int i = 1; i < n; i++) {  // Loop through array to create remaining nodes
        t = new node;              // Create a new node
        t->data = a[i];            // Assign data
        t->next = NULL;            // Set next pointer to NULL
        last->next = t;            // Link the previous node to the new node
        last = t;                  // Move the last pointer to the new node
    }
}

// Function to insert a node at the last position
void insertlast(int x) {
    node *t = new node;  // Create a new node
    t->data = x;         // Assign data
    t->next = NULL;      // Set next pointer to NULL

    if (first == NULL) {   // If the list is empty
        first = last = t;  // First and last point to the new node
    } else {
        last->next = t;    // Link the last node to the new node
        last = t;          // Update the last pointer
    }
}

// Function to display the linked list
void display(node *p) {
    while (p != NULL) {       // Traverse the list
        cout << p->data << " ";  // Print data
        p = p->next;           // Move to next node
    }
}

int main() {
    int a[] = {3, 5, 7, 20, 15};  // Array to initialize the list
    create(a, 5);                 // Create the list
    insertlast(10);                // Insert 6 at the last position
    display(first);               // Display the list
    return 0;
}
