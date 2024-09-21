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

// // Function to find the maximum value in the linked list
// int max(struct node *p) {
//     int m = -34535;  // Initialize m with a very low value
//     while (p) {
//         if (p->data > m) {  // If current node's data is greater than m, update m
//             m = p->data;
//         }
//         p = p->next;  // Move to the next node
//     }
//     return m;  // Return the maximum value
// }

// int main() {
//     int a[] = {3, 5, 7, 20, 15};  // Array to create the linked list from
//     create(a, 5);                 // Create the linked list
//     cout << "Maximum: " << max(first) << endl;  // Display the maximum value in the linked list
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

// Function to find the maximum value in the linked list using recursion
int max(struct node *p) {
    int m = -34535;  // Initialize m with a very low value
    int x = 0;       // Variable to store the maximum of the next nodes

    if (p == 0) {
        return m;    // Return when the end of the linked list is reached
    }

    x = max(p->next);  // Recursively call max on the next node
    return x > p->data ? x : p->data;  // Return the larger of the current node's data or the recursive result
}

int main() {
    int a[] = {3, 5, 7, 20, 15};  // Array to create the linked list from
    create(a, 5);                 // Create the linked list
    cout << "Maximum: " << max(first) << endl;  // Display the maximum value in the linked list
    return 0;
}
