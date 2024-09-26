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

// Function to sort the linked list using selection sort
void sort(node *p) {
    node *i, *j;
    for (i = p; i != NULL; i = i->next) {
        node *min = i;  // Assume the current node is the minimum
        for (j = i->next; j != NULL; j = j->next) {
            if (j->data < min->data) {
                min = j;  // Update min if a smaller element is found
            }
        }
        // Swap the data of the current node with the min node
        if (min != i) {
            int temp = i->data;
            i->data = min->data;
            min->data = temp;
        }
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
    int a[] = {3, 4, 0, 1, 15};  // Array to create the linked list from
    create(a, 5);                // Create the linked list
    sort(first);                 // Sort the linked list
    display(first);              // Display the sorted linked list using recursion
    return 0;
}
