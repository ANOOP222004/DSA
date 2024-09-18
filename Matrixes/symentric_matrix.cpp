#include <iostream>
using namespace std;

class SymmetricMatrix
{
private:
    int n;      // Size of the matrix
    int *a;     // 1D array to store diagonal elements

public:
    // Constructor to initialize matrix size and allocate memory for diagonal elements
    SymmetricMatrix(int n)
    {
        this->n = n;
        a = new int[n];  // Only diagonal elements are stored
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
            return a[min(i, j) - 1];  // Reflect the value across the diagonal for symmetry
        }
    }

    // Method to display the symmetric matrix
    void display()
    {
        for (int i = 1; i <= n; i++)  // 1-based indexing
        {
            for (int j = 1; j <= n; j++)
            {
                cout << get(i, j) << " ";  // Print each element using the get function
            }
            cout << endl;  // Newline after each row
        }
    }

    // Destructor to deallocate memory
    ~SymmetricMatrix()
    {
        delete[] a;
    }
};

// Main function to demonstrate the use of SymmetricMatrix class
int main()
{
    SymmetricMatrix d(5);  // Create a 5x5 symmetric matrix

    // Set diagonal elements
    d.set(1, 1, 2);
    d.set(2, 2, 3);
    d.set(3, 3, 4);
    d.set(4, 4, 5);
    d.set(5, 5, 6);

    // Display the matrix
    d.display();

    return 0;
}
