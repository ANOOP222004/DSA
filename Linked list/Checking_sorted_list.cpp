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

// Function to check if the linked list is sorted
bool check(node *p)
{
    int x = -636474647;  // Initialize x to a very small value
    while (p != NULL)
    {
        if (p->data < x) // If the current node's data is smaller than the previous one
        {
            return false; // List is not sorted
        }
        x = p->data;      // Update x to the current node's data
        p = p->next;      // Move to the next node
    }
    return true;          // If the loop finishes, the list is sorted
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
    int a[] = {2, 4, 1, 7, 9}; // Array to initialize the list
    create(a, 5);              // Create the list
    cout << (check(first) ? "The list is sorted" : "The list is not sorted") << endl; // Check if the list is sorted
    display(first);            // Display the list
    return 0;
}
