#include<iostream>
using namespace std;

class Toeplitz
{
private:
    int n;   // Matrix size
    int *a;  // Array to store elements

public:
    // Constructor to initialize matrix size and allocate memory for storing first row and column
    Toeplitz(int n)
    {
        this->n = n;
        a = new int[2 * n - 1];  // Only store the first row and first column
    }

    // Method to set the value in the Toeplitz matrix
    void set(int i, int j, int x)
    {
        if (i <= j)
        {
            a[j - i] = x;  // Storing upper diagonal and main diagonal elements
        }
        else
        {
            a[n + i - j - 1] = x;  // Storing lower diagonal elements
        }
    }

    // Method to get the value at position (i, j) in the Toeplitz matrix
    int get(int i, int j)
    {
        if (i <= j)
        {
            return a[j - i];  // Return value from upper diagonal and main diagonal
        }
        else
        {
            return a[n + i - j - 1];  // Return value from lower diagonal
        }
    }

    // Method to display the Toeplitz matrix
    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << get(i, j) << " ";  // Print value at (i, j)
            }
            cout << endl;  // Newline after each row
        }
    }

    // Destructor to deallocate memory
    ~Toeplitz()
    {
        delete[] a;
    }
};

// Main function to demonstrate the use of Toeplitz class
int main()
{
    int n = 5;  // Size of Toeplitz matrix
    Toeplitz t(n);

    // Set values for Toeplitz matrix
    t.set(1, 1, 1);
    t.set(1, 2, 2);
    t.set(1, 3, 3);
    t.set(1, 4, 4);
    t.set(1, 5, 5);
    t.set(2, 1, 6);
    t.set(3, 1, 7);
    t.set(4, 1, 8);
    t.set(5, 1, 9);

    // Display the Toeplitz matrix
    t.display();

    return 0;
}
