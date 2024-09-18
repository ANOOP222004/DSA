// #include <iostream>
// using namespace std;

// // Function to set the value in a diagonal matrix
// void set(int a[], int i, int j, int x) {
//     if (i == j) {
//         a[i - 1] = x;  // Store the element if it's on the diagonal
//     }
// }

// // Function to get the value from the diagonal matrix
// int get(int a[], int i, int j) {
//     if (i == j) {
//         return a[i - 1];  // Return the diagonal element
//     } else {
//         return 0;  // Return 0 if not on the diagonal
//     }
// }

// // Function to display the diagonal matrix
// void display(int a[], int n) {
//     // Print the matrix
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             cout << get(a, i, j) << " ";  // Use the get function to retrieve values
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n = 5;  // Matrix size
//     int a[n];   // Array to store the diagonal elements

//     // Set diagonal elements
//     set(a, 1, 1, 5);
//     set(a, 2, 2, 8);
//     set(a, 3, 3, 9);
//     set(a, 4, 4, 12);
//     set(a, 5, 5, 15);

//     // Call display function
//     display(a, n);

//     return 0;
// }

#include<iostream>
using namespace std;

class Diagonal
{
private:
    int n;
    int *a;

public:
    // Constructor to initialize matrix size and allocate memory for diagonal elements
    Diagonal(int n)
    {
        this->n = n;
        a = new int[n];
    } 

    // Method to set the value of diagonal elements
    void set(int i, int j, int x)
    {
        if (i == j)
        {
            a[i - 1] = x;  // Store only diagonal elements
        }
    }

    // Method to get the value at position (i, j)
    int get(int i, int j)
    {
        if (i == j)
        {
            return a[i - 1];  // Return the diagonal element
        }
        else
        {
            return 0;  // Return 0 for non-diagonal elements
        }
    }

    // Method to display the diagonal matrix
    void display()
    {
        for (int i = 1; i <= n; i++)  // 1-based indexing
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == j)
                {
                    cout << a[i - 1] << " ";  // Diagonal element
                }
                else
                {
                    cout << "0 ";  // Non-diagonal element
                }
            }
            cout << endl;  // Newline after each row
        }
    }

    // Destructor to deallocate memory
    ~Diagonal()
    {
        delete[] a;
    }
};

// Main function to demonstrate the use of Diagonal class
int main()
{
    Diagonal d(5);  // Create a 5x5 diagonal matrix

    // Set diagonal elements
    d.set(1, 1, 5);
    d.set(2, 2, 8);
    d.set(3, 3, 9);
    d.set(4, 4, 12);
    d.set(5, 5, 15);

    // Display the matrix
    d.display();

    return 0;
}
