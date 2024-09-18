#include <iostream>
using namespace std;

class Tridiagonal
{
private:
    int n;
    int *a;

public:
    // Constructor to initialize matrix size and allocate memory for tridiagonal elements
    Tridiagonal(int n)
    {
        this->n = n;
        a = new int[3 * n - 2];  // Memory for main diagonal, upper diagonal, and lower diagonal
    }

    // Method to set the value of tridiagonal elements
    void set(int i, int j, int x)
    {
        if (i - j == 1)
        {
            a[j - 1] = x;  // Lower diagonal (i > j)
        }
        else if (i - j == 0)
        {
            a[n - 1 + i - 1] = x;  // Main diagonal (i == j)
        }
        else if (i - j == -1)
        {
            a[2 * n - 1 + i - 1] = x;  // Upper diagonal (i < j)
        }
    }

    // Method to get the value at position (i, j)
    int get(int i, int j)
    {
        if (i - j == 1)
        {
            return a[i - 2];  // Lower diagonal
        }
        else if (i - j == 0)
        {
            return a[n - 1 + i - 1];  // Main diagonal
        }
        else if (i - j == -1)
        {
            return a[2 * n - 1 + i - 1];  // Upper diagonal
        }
        else
        {
            return 0;  // Elements that are not part of the tridiagonal matrix
        }
    }

    // Method to display the tridiagonal matrix
    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << get(i, j) << " ";  // Print the value at (i, j)
            }
            cout << endl;
        }
    }

    // Destructor to deallocate memory
    ~Tridiagonal()
    {
        delete[] a;
    }
};

// Main function to demonstrate the use of the Tridiagonal class
int main()
{
    Tridiagonal d(5);  // Create a 5x5 tridiagonal matrix

    // Set elements in the tridiagonal matrix
    d.set(1, 1, 5); d.set(1, 2, 6);
    d.set(2, 1, 8); d.set(2, 2, 9); d.set(2, 3, 7);
    d.set(3, 2, 10); d.set(3, 3, 12); d.set(3, 4, 11);
    d.set(4, 3, 13); d.set(4, 4, 15); d.set(4, 5, 14);
    d.set(5, 4, 16); d.set(5, 5, 17);

    // Display the matrix
    d.display();

    return 0;
}
