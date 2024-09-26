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

// Function to delete a node at a given position
int Delete(int pos)
{
    node *q = NULL, *p = first;
    int x = -1;

    // If deleting the first node
    if (pos == 1)
    {
        p = first;
        first = first->next;
        x = p->data; // Save the data of the node to be deleted
        delete p;    // Delete the node
        return x;    // Return the deleted value
    }

    // Deleting a node from any other position
    for (int i = 0; i < pos - 1 && p; i++)
    {
        q = p;        // q is the previous node
        p = p->next;  // p moves to the node to be deleted
    }

    if (p)
    {
        q->next = p->next; // Bypass the node to be deleted
        x = p->data;       // Save the data of the node to be deleted
        delete p;          // Delete the node    
        cout<<"Deleted Data : "<<x<<endl;      // Return the deleted value
         return x;
    }
    // cout<<x;
    return -1; // If position is out of range, return -1
}

// Function to display the linked list
void display(node *p)
{
    while (p != NULL)
    {                          // Traverse the list
        cout << p->data << " "; // Print data
        p = p->next;            // Move to next node
    }
    cout << endl;
}

int main()
{
    int a[] = {2, 4, 5, 7, 9}; // Array to initialize the list
    create(a, 5);            // Create the list
    Delete(3);                 // Delete the node at position 3
    display(first);            // Display the list
    return 0;
}
