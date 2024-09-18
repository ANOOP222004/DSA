// //row major method
// #include <iostream>
// using namespace std;

// class UpperTriangular
// {
// private:
//     int n;   // Size of the matrix
//     int *a;  // 1D array to store upper triangular elements

// public:
//     // Constructor to initialize matrix size and allocate memory
//     UpperTriangular(int n)
//     {
//         this->n = n;
//         a = new int[n * (n + 1) / 2];  // Allocate memory for upper triangular elements
//     }

//     // Method to set the value of elements in upper triangular matrix
//     void set(int i, int j, int x)
//     {
//         if (i <= j)  // Only set if it's in the upper triangle
//         {
//             int index = (j*(j-1)/2)+j-i;  // Index formula for upper triangular matrix
//             a[index] = x;  // Store the element in the 1D array
//         }
//     }

//     // Method to get the value at position (i, j)
//     int get(int i, int j)
//     {
//         if (i <= j)  // Only return if it's in the upper triangle
//         {
//             int index = (j*(j-1)/2)+j-i;  // Get the element from 1D array
//             return a[index];
//         }
//         else
//         {
//             return 0;  // Return 0 for non-upper triangular elements
//         }
//     }

//     // Method to display the upper triangular matrix
//     void display()
//     {
//         for (int i = 1; i <= n; i++)  // 1-based indexing for the matrix
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 if (i <= j)  // Display elements from the upper triangle
//                 {
//                     int index = (j*(j-1)/2)+j-i;
//                     cout << a[index] << " ";
//                 }
//                 else  // Display 0 for elements below the diagonal
//                 {
//                     cout << "0 ";
//                 }
//             }
//             cout << endl;  // Newline after each row
//         }
//     }

//     // Destructor to deallocate memory
//     ~UpperTriangular()
//     {
//         delete[] a;
//     }
// };

// // Main function to demonstrate the use of UpperTriangular class
// int main()
// {
//     UpperTriangular d(5); // Create a 5x5 upper triangular matrix

//     // Set elements in the upper triangular matrix
//     d.set(1, 1, 11); d.set(1, 2, 12); d.set(1, 3, 13); d.set(1, 4, 14); d.set(1, 5, 15);
//     d.set(2, 2, 7); d.set(2, 3, 8); d.set(2, 4, 9); d.set(2, 5, 10);
//     d.set(3, 3, 4); d.set(3, 4, 5); d.set(3, 5, 6);
//     d.set(4, 4, 2); d.set(4, 5, 3);
//     d.set(5, 5, 1);
    
    
  
   
//     // Display the matrix
//     d.display();

//     return 0;
// }

//colomn major
#include <iostream>
using namespace std;

class UpperTriangular
{
private:
    int n;   // Size of the matrix
    int *a;  // 1D array to store upper triangular elements

public:
    // Constructor to initialize matrix size and allocate memory
    UpperTriangular(int n)
    {
        this->n = n;
        a = new int[n * (n + 1) / 2];  // Allocate memory for upper triangular elements
    }

    // Method to set the value of elements in upper triangular matrix
    void set(int i, int j, int x)
    {
        if (i <= j)  // Only set if it's in the upper triangle
        {
            int index = (i - 1) * n - ((i - 1) * i) / 2 + (j - i);  // Index formula for upper triangular matrix
            a[index] = x;  // Store the element in the 1D array
        }
    }

    // Method to get the value at position (i, j)
    int get(int i, int j)
    {
        if (i <= j)  // Only return if it's in the upper triangle
        {
            int index = (i - 1) * n - ((i - 1) * i) / 2 + (j - i);  // Get the element from 1D array
            return a[index];
        }
        else
        {
            return 0;  // Return 0 for non-upper triangular elements
        }
    }

    // Method to display the upper triangular matrix
    void display()
    {
        for (int i = 1; i <= n; i++)  // 1-based indexing for the matrix
        {
            for (int j = 1; j <= n; j++)
            {
                if (i <= j)  // Display elements from the upper triangle
                {
                    int index = (i - 1) * n - ((i - 1) * i) / 2 + (j - i);
                    cout << a[index] << " ";
                }
                else  // Display 0 for elements below the diagonal
                {
                    cout << "0 ";
                }
            }
            cout << endl;  // Newline after each row
        }
    }

    // Destructor to deallocate memory
    ~UpperTriangular()
    {
        delete[] a;
    }
};

// Main function to demonstrate the use of UpperTriangular class
int main()
{
    UpperTriangular d(5); // Create a 5x5 upper triangular matrix

    // Set elements in the upper triangular matrix
    d.set(1, 1, 1);
    d.set(1, 2, 2); d.set(2, 2, 3);
    d.set(1, 3, 4); d.set(2, 3, 5); d.set(3, 3, 6);
    d.set(1, 4, 7); d.set(2, 4, 8); d.set(3, 4, 9); d.set(4, 4, 10);
    d.set(1, 5, 11); d.set(2, 5, 12); d.set(3, 5, 13); d.set(4, 5, 14); d.set(5, 5, 15);

    // Display the matrix
    d.display();

    return 0;
}
