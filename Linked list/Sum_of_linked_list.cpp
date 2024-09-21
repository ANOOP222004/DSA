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

// // Function to sum the data of nodes in the linked list
// int count(struct node *p) {
//     int sum = 0;  // Initialize sum to 0
//     while (p != NULL) {  // Traverse until the end of the list
//         sum += p->data;  // Add the data of each node to sum
//         p = p->next;     // Move to the next node
//     }
//     return sum;  // Return the total sum
// }

// int main() {
//     int a[] = {3, 5, 7, 10, 15};  // Array to create the linked list from
//     create(a, 5);                 // Create the linked list
//     cout << "Sum of node data: " << countn (first) << endl;  // Display the sum of node data
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

// Recursive function to count the nodes in the linked list
int sum(struct node *p) {
    if (p == NULL) {   // Base case: if the pointer is NULL, return 0
        return 0;
    } else {
        return sum(p->next) + p->data;  // Recursive call: count the rest of the list and add 1
    }
}

int main() {
    int a[] = {3, 5, 7, 10, 15};  // Array to create the linked list from
    create(a, 5);                 // Create the linked list
    int total_nodes = sum(first); // Call count and store the result
    cout << "Number of node data: " << total_nodes << endl;  // Display the count of nodes
    return 0;
}
