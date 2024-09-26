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

// Function to remove duplicate nodes in a sorted linked list
void remove_duplicates(node *q)
{
    node *p = q->next;  // Start from the second node
    while (p != NULL)
    {
        if (q->data != p->data)  // If current and next nodes have different data
        {
            q = p;      // Move q to p
            p = p->next; // Move p to the next node
        }
        else  // If they have the same data, remove the duplicate
        {
            q->next = p->next;  // Bypass the duplicate node
            delete p;           // Delete the duplicate node
            p = q->next;        // Move to the next node
        }
    }
}

// Function to display the linked list
void display(node *p)
{
    while (p != NULL)
    {                           // Traverse the list
        cout << p->data << " "; // Print data
        p = p->next;            // Move to next node
    }
    cout << endl;
}

int main()
{
    int a[] = {2, 4, 4, 9, 9, 9}; // Array to initialize the list
    create(a, 6);                 // Create the list
    remove_duplicates(first);     // Remove duplicates
    display(first);               // Display the list
    return 0;
}
