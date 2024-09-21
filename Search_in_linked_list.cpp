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

// // Function to search for a node with a specific key in the linked list
// node* search(struct node *p, int key) {
//     while (p != 0) {
//         if (key == p->data) {  // If the key is found, return the node
//             return p;
//         }
//         p = p->next;  // Move to the next node
//     }
//     return 0;  // If the key is not found, return NULL
// }

// int main() {
//     int a[] = {3, 5, 7, 20, 15};  // Array to create the linked list from
//     create(a, 5);                 // Create the linked list
//     node* result = search(first, 15);  // Search for a node with value 15
//     if (result) {
//         cout << "Node found at address: " << result << endl;  // If found, print the address of the node
//     } else {
//         cout << "Node not found!" << endl;  // If not found, print "Node not found"
//     }
//     return 0;
// }

// // method 2 using recursion
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

// // Recursive function to search for a node with a specific key in the linked list
// node* search(struct node *p, int key) {
//     if (p == NULL) {
//         return NULL;  // Base case: If the list is empty or the key is not found, return NULL
//     }
//     if (key == p->data) {
//         return p;  // If the key is found, return the node
//     }
//     return search(p->next, key);  // Recursive case: Move to the next node
// }

// int main() {
//     int a[] = {3, 5, 7, 20, 15};  // Array to create the linked list from
//     create(a, 5);                 // Create the linked list
//     node* result = search(first, 15);  // Search for a node with value 15
//     if (result) {
//         cout << "Node found at address: " << result << endl;  // If found, print the address of the node
//         cout << "Node data: " << result->data << endl;        // Print the data of the found node
//     } else {
//         cout << "Node not found!" << endl;  // If not found, print "Node not found"
//     }
//     return 0;
// }

//method 3 transposition
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

// Function to search for a node with a specific key in the linked list
node* search(struct node *p, int key) {
    node *q=NULL;
    while (p!=NULL)
    {
        if (key==p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
        }
        q=p;
        p=p->next;
    }
}

int main() {
    int a[] = {3, 5, 7, 20, 15};  // Array to create the linked list from
    create(a, 5);                 // Create the linked list
    node* result = search(first, 15);  // Search for a node with value 15
    if (result) {
        cout << "Node found at address: " << result << endl;  // If found, print the address of the node
    } else {
        cout << "Node not found!" << endl;  // If not found, print "Node not found"
    }
    return 0;
}
