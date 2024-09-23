#include<iostream>
using namespace std;

struct node {
    int data;             // Data of the node
    struct node *next;    // Pointer to the next node
} *first = NULL;          // Initialize the first pointer to NULL

// Function to create a linked list from an array
void create(int a[], int n) {
    struct node *t, *last;  
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

// Function to insert a node at a given position
void insert(int pos, int x) {
    node *t, *p = first;   // Initialize p to first
    if (pos == 0) {        // Insert at the beginning
        t = new node;
        t->data = x;
        t->next = first;
        first = t;
    } else if (pos > 0) {  // Insert at a given position
        for (int i = 0; i < pos - 1 && p; i++) {  // Traverse to the position
            p = p->next;
        }
        if (p) {           // If position is valid
            t = new node;
            t->data = x;
            t->next = p->next;
            p->next = t;
        }
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
    insert(4, 6);                 // Insert 6 at position 4
    display(first);               // Display the list
    return 0;
}
