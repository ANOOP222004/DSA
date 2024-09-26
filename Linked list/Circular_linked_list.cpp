// //method 1
// #include<iostream>
// using namespace std;

// struct node {
//     int data;             // Data of the node
//     struct node *next;    // Pointer to the next node
// } *head = NULL;           // Initialize the head pointer to NULL

// // Function to create a circular linked list from an array
// void create(int a[], int n) {
//     struct node *t, *last;  
//     head = new node;       // Create the first node
//     head->data = a[0];     // Assign data to the first node
//     head->next = head;     // Set the next pointer to point to head, making it circular
//     last = head;           // Initialize last pointer to head

//     for (int i = 1; i < n; i++) {  // Loop through array to create remaining nodes
//         t = new node;              // Create a new node
//         t->data = a[i];            // Assign data
//         t->next = last->next;      // New node points to head
//         last->next = t;            // Last node points to new node
//         last = t;                  // Move last to new node
//     }
// }

// // Function to display the circular linked list
// void display(node *p) {
//     if (head == NULL) return;      // If the list is empty, do nothing
//     do {
//         cout << p->data << " ";    // Print data of current node
//         p = p->next;               // Move to the next node
//     } while (p != head);           // Stop when we circle back to the head
//     cout << endl;                  // Print newline after the list is displayed
// }

// int main() {
//     int a[] = {3, 5, 7, 20, 15};   // Array to initialize the list
//     create(a, 5);                  // Create the circular linked list
//     display(head);                 // Display the list
//     return 0;
// }

//method 2 using recursion
#include<iostream>
using namespace std;

struct node {
    int data;             // Data of the node
    struct node *next;    // Pointer to the next node
} *head = NULL;           // Initialize the head pointer to NULL

// Function to create a circular linked list from an array
void create(int a[], int n) {
    struct node *t, *last;  
    head = new node;       // Create the first node
    head->data = a[0];     // Assign data to the first node
    head->next = head;     // Set the next pointer to point to head, making it circular
    last = head;           // Initialize last pointer to head

    for (int i = 1; i < n; i++) {  // Loop through array to create remaining nodes
        t = new node;              // Create a new node
        t->data = a[i];            // Assign data
        t->next = last->next;      // New node points to head
        last->next = t;            // Last node points to new node
        last = t;                  // Move last to new node
    }
}

// Function to display the circular linked list
void display(node *p) {
    static int flag = 0;

    if (head == NULL) return;        // If the list is empty, do nothing
    
    else if (p != head || flag == 0) // Check to avoid infinite loop in circular list
    {
        flag = 1;                    // Set flag after first iteration
        cout << p->data << " ";      // Print data
        display(p->next);            // Recursive call to next node
    }
    flag = 0;                        // Reset flag after complete traversal
}

int main() {
    int a[] = {3, 5, 7, 20, 15};     // Array to initialize the list
    create(a, 5);                    // Create the circular linked list
    display(head);                   // Display the list
    return 0;
}
