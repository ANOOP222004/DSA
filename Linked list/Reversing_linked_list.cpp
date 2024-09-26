// //method 1
// #include <iostream>
// using namespace std;

// struct node
// {
//     int data;          // Data of the node
//     struct node *next; // Pointer to the next node
// } *first = NULL;       // Initialize the first pointer to NULL

// // Function to create a linked list from an array
// void create(int a[], int n)
// {
//     struct node *t, *last;
//     first = new node;   // Create the first node
//     first->data = a[0]; // Assign data to the first node
//     first->next = NULL; // Set the next pointer to NULL
//     last = first;       // Initialize last pointer to first

//     for (int i = 1; i < n; i++)
//     {                   // Loop through array to create remaining nodes
//         t = new node;   // Create a new node
//         t->data = a[i]; // Assign data
//         t->next = NULL; // Set next pointer to NULL
//         last->next = t; // Link the previous node to the new node
//         last = t;       // Move the last pointer to the new node
//     }
// }

// // Correct logic to reverse the linked list
// void reverse()
// {
//     node *r=NULL,*q=NULL,*p=first; // Initialize pointers
//     while (p != NULL)
//     {
//         r=q;            // Move r to the current q
//         q=p;            // Move q to the current p
//         p=p->next;      // Move p to the next node

//         q->next=r;      // Reverse the link by pointing q->next to r
//     }
//     first = q; // Update head to the last node (new first)
// }

// // Function to display the linked list
// void display(node *p)
// {
//     while (p != NULL)
//     {                           // Traverse the list
//         cout << p->data << " "; // Print data
//         p = p->next;            // Move to next node
//     }
//     cout << endl;
// }

// int main()
// {
//     int a[] = {2, 4, 4, 9, 9, 9}; // Array to initialize the list
//     create(a, 6);                 // Create the list
//     reverse();                    // Reverse the list
//     display(first);               // Display the reversed list
//     return 0;
// }

//method 2 using recursion
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

// Recursive function to reverse the linked list
void reverse(node *q, node *p)
{
   if(p != NULL)        // Base case: if the list has more nodes
   {
       reverse(p, p->next);  // Recursive call with next node
       p->next = q;          // Reverse the link between current and previous nodes
   }
   else
   {
       first = q;        // Update head when recursion reaches the end
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
    reverse(NULL, first);         // Reverse the list
    display(first);               // Display the reversed list
    return 0;
}
