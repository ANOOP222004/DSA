#include <iostream>
using namespace std;

struct node
{
    int data;          // Data of the node
    struct node *next; // Pointer to the next node
} *first = NULL;       // Initialize the first pointer to NULL

// Function to create a linked list from an array
void create(int a[], int n)
{
    struct node *t, *last;
    first = new node;   // Create the first node
    first->data = a[0]; // Assign data to the first node
    first->next = NULL; // Set the next pointer to NULL
    last = first;       // Initialize last pointer to first

    for (int i = 1; i < n; i++)
    {                   // Loop through array to create remaining nodes
        t = new node;   // Create a new node
        t->data = a[i]; // Assign data
        t->next = NULL; // Set next pointer to NULL
        last->next = t; // Link the previous node to the new node
        last = t;       // Move the last pointer to the new node
    }
}

// Function to insert a node in sorted order
void insert(int x)
{
    node *t, *q = NULL, *p = first;

    t = new node;      // Create a new node
    t->data = x;       // Assign the data value
    t->next = NULL;    // Set next pointer of the new node to NULL

    // If inserting at the beginning
    if (first == NULL || first->data >= x)
    {
        t->next = first;
        first = t;
        return;
    }

    // Traverse the list to find the correct position to insert
    while (p != NULL && p->data < x)
    {
        q = p;         // Keep track of the previous node
        p = p->next;   // Move to the next node
    }

    // Insert the new node between q and p
    t->next = q->next;
    q->next = t;
}

// Function to display the linked list
void display(node *p)
{
    while (p != NULL)
    {                  // Traverse the list
        cout << p->data << " "; // Print data
        p = p->next;    // Move to next node
    }
    cout << endl;
}

int main()
{
    int a[] = {2, 4, 5, 7, 9}; // Array to initialize the list
    create(a, 5);              // Create the list
    insert(0);                 // Insert 6 in sorted order
    display(first);            // Display the list
    return 0;
}
