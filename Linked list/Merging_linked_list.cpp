#include <iostream>
using namespace std;

struct node {
    int data;             // Data of the node
    struct node *next;    // Pointer to the next node
} *first = NULL, *second = NULL;  // Initialize the first and second pointers to NULL

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

// Function to create the second linked list
void create2(int b[], int m) {
    struct node *t, *last;
    second = new node;       // Create the first node
    second->data = b[0];     // Assign data to the first node
    second->next = NULL;     // Set the next pointer to NULL
    last = second;           // Initialize last pointer to first

    for (int i = 1; i < m; i++) {  // Loop through array to create remaining nodes
        t = new node;              // Create a new node
        t->data = b[i];            // Assign data
        t->next = NULL;            // Set next pointer to NULL
        last->next = t;            // Link the previous node to the new node
        last = t;                  // Move the last pointer to the new node
    }
}

// Function to merge two sorted linked lists
node* merge(node *p, node *q) {
    if (p == NULL) return q;
    if (q == NULL) return p;

    if (p->data < q->data) {
        p->next = merge(p->next, q);
        return p;
    } 
    else {
        q->next = merge(p, q->next);
        return q;
    }
}

// Function to display the linked list
void display(node *p) {
    while (p != NULL) {       // Traverse the list
        cout << p->data << " ";  // Print data
        p = p->next;           // Move to next node
    }
    cout << endl;
}

int main() {
    int a[] = {3, 5, 7, 15, 20};  // Array to initialize the first list
    int b[] = {1, 2, 4, 6, 8};    // Array to initialize the second list
    create(a, 5);                 // Create the first list
    create2(b, 5);                // Create the second list

    node *mergedList = merge(first, second);  // Merge the two lists
    display(mergedList);               // Display the merged list

    return 0;
}
