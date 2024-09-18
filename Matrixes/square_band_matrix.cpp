#include <iostream>
using namespace std;

class BandMatrix
{
private:
    int n;  // Matrix size
    int *a; // Array to store the non-zero elements

public:
    // Constructor to initialize matrix size and allocate memory for band matrix elements
    BandMatrix(int n)
    {
        this->n = n;
        a = new int[5 * n - 6];  // Memory for lower diagonals, main diagonal, and upper diagonals
    }

    // Method to set the values in the band matrix from an ordered input array
    void setFromArray(int input[])
    {
        // Copy values from input array into the matrix storage array
        for (int i = 0; i < 5 * n - 6; i++)
        {
            a[i] = input[i];
        }
    }

    // Method to get the value from the band matrix
    int get(int i, int j)
    {
        if (i - j == 2)
        {
            return a[j - 1];  // Lower diagonal (i > j by 2)
        }
        else if (i - j == 1)
        {
            return a[n - 2 + i - 1];  // Lower diagonal (i > j by 1)
        }
        else if (i - j == 0)
        {
            return a[2 * n - 3 + i - 1];  // Main diagonal (i == j)
        }
        else if (i - j == -1)
        {
            return a[3 * n - 4 + i - 1];  // Upper diagonal (i < j by 1)
        }
        else if (i - j == -2)
        {
            return a[4 * n - 6 + i - 1];  // Upper diagonal (i < j by 2)
        }
        else
        {
            return 0;  // Elements outside the band are 0
        }
    }

    // Method to display the band matrix
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
    ~BandMatrix()
    {
        delete[] a;
    }
};

// Main function to demonstrate the use of the BandMatrix class
int main()
{
    BandMatrix d(8);  // Create an 8x8 band matrix with a bandwidth of 2

    // Ordered input array for the 8x8 band matrix
    // Lower diagonal (i - j = 2): 6 elements
    // Main diagonal (i == j): 8 elements
    // Upper diagonal 1 (i - j = -1): 7 elements
    // Upper diagonal 2 (i - j = -2): 6 elements
    int input[] = {1, 2, 3, 4, 5, 6,      // Lower diagonal
                   10, 11, 12, 13, 14, 15, 16, 17, // Main diagonal
                   20, 21, 22, 23, 24, 25, 26,  // Upper diagonal 1
                   30, 31, 32, 33, 34, 35};    // Upper diagonal 2

    // Set the band matrix values from the ordered input array
    d.setFromArray(input);

    // Display the matrix
    d.display();

    return 0;
}
