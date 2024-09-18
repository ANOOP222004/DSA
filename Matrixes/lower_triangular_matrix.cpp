// //method 1 row major method
// #include <iostream>
// using namespace std;

// // Function to set the value in the lower triangular matrix
// void set(int a[], int i, int j, int x) {
//     if (i >= j) {  // Only set elements in the lower triangle
//         int index = (i * (i - 1)) / 2 + (j - 1);
//         a[index] = x;
//     }
// }

// // Function to get the value from the lower triangular matrix
// int get(int a[], int i, int j) {
//     if (i >= j) {  // Return elements from the lower triangle
//         int index = (i * (i - 1)) / 2 + (j - 1);
//         return a[index];
//     }
//     else {
//         return 0;  // Return 0 for non-lower-triangular elements
//     }
// }

// // Function to display the lower triangular matrix
// void display(int a[], int n) {
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             cout << get(a, i, j) << " ";  // Use the get function to retrieve values
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n = 5;  // Matrix size
//     int size = n * (n + 1) / 2;  // Size of the 1D array to store the lower triangular matrix
//     int a[size];   // Array to store the lower triangular elements

//     // Set elements in the lower triangular matrix
//     set(a, 1, 1, 1);
//     set(a, 2, 1, 2); set(a, 2, 2, 3);
//     set(a, 3, 1, 4); set(a, 3, 2, 5); set(a, 3, 3, 6);
//     set(a, 4, 1, 7); set(a, 4, 2, 8); set(a, 4, 3, 9); set(a, 4, 4, 10);
//     set(a, 5, 1, 11); set(a, 5, 2, 12); set(a, 5, 3, 13); set(a, 5, 4, 14); set(a, 5, 5, 15);

//     // Display the lower triangular matrix
//     display(a, n);

//     return 0;
// }

// //method 1 colomn major method
// #include <iostream>
// using namespace std;

// // Function to set the value in the lower triangular matrix in column-major order
// void set(int a[], int n, int i, int j, int x)
// {
//     if (i >= j)
//     { // Only set elements in the lower triangle
//         int index = (n * (j - 1) - (j - 2) * (j - 1) / 2) + (i - j);
//         a[index] = x;
//     }
// }

// // Function to get the value from the lower triangular matrix in column-major order
// int get(int a[], int n, int i, int j)
// {
//     if (i >= j)
//     { // Return elements from the lower triangle
//         int index = (n * (j - 1) - (j - 2) * (j - 1) / 2) + (i - j);
//         return a[index];
//     }
//     else
//     {
//         return 0; // Return 0 for non-lower-triangular elements
//     }
// }

// // Function to display the lower triangular matrix
// void display(int a[], int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << get(a, n, i, j) << " "; // Use the get function to retrieve values
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n = 5;                  // Matrix size
//     int size = n * (n + 1) / 2; // Size of the 1D array to store the lower triangular matrix
//     int a[size];                // Array to store the lower triangular elements

//     // Set elements in the lower triangular matrix
//     set(a, n, 1, 1, 1);
//     set(a, n, 2, 1, 2);set(a, n, 2, 2, 3);
//     set(a, n, 3, 1, 4);set(a, n, 3, 2, 5);set(a, n, 3, 3, 6);
//     set(a, n, 4, 1, 7);set(a, n, 4, 2, 8);set(a, n, 4, 3, 9);set(a, n, 4, 4, 10);
//     set(a, n, 5, 1, 11);set(a, n, 5, 2, 12);set(a, n, 5, 3, 13);set(a, n, 5, 4, 14);set(a, n, 5, 5, 15);

//     // Display the lower triangular matrix
//     display(a, n);

//     return 0;
// }

// //method 2 row major method
// #include <iostream>
// using namespace std;

// class Diagonal
// {
// private:
//     int n;   // Size of the matrix
//     int *a;  // 1D array to store lower triangular elements

// public:
//     // Constructor to initialize matrix size and allocate memory
//     Diagonal(int n)
//     {
//         this->n = n;
//         a = new int[n * (n + 1) / 2];  // Size for lower triangular matrix in column-major
//     }

//     // Method to set the value of elements in lower triangular matrix
//     void set(int i, int j, int x)
//     {
//         if (i >= j)
//         {
//             int index = (i * (i - 1)) / 2 + (j - 1);  // Column-major index formula for lower triangular matrix
//             a[index] = x;  // Store the element
//         }
//     }

//     // Method to get the value at position (i, j)
//     int get(int i, int j)
//     {
//         if (i >= j)  // If it's part of the lower triangle
//         {
//             int index = (i * (i - 1)) / 2 + (j - 1);  // Get the element from 1D array
//             return a[index];
//         }
//         else
//         {
//             return 0;  // Return 0 for non-lower triangular elements
//         }
//     }

//     // Method to display the lower triangular matrix
//     void display()
//     {
//         for (int i = 1; i <= n; i++)  // 1-based indexing
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 if (i >= j)  // Display stored elements for lower triangle
//                 {
//                     int index = (i * (i - 1)) / 2 + (j - 1);
//                     cout << a[index] << " ";
//                 }
//                 else  // Display 0 for non-lower triangular elements
//                 {
//                     cout << "0 ";
//                 }
//             }
//             cout << endl;  // Newline after each row
//         }
//     }

//     // Destructor to deallocate memory
//     ~Diagonal()
//     {
//         delete[] a;
//     }
// };

// // Main function to demonstrate the use of Diagonal class
// int main()
// {
//     Diagonal d(5); // Create a 5x5 lower triangular matrix

//     // Set elements in the lower triangular matrix
//     d.set(1, 1, 1);
//     d.set(2, 1, 2); d.set(2, 2, 3);
//     d.set(3, 1, 4); d.set(3, 2, 5); d.set(3, 3, 6);
//     d.set(4, 1, 7); d.set(4, 2, 8); d.set(4, 3, 9); d.set(4, 4, 10);
//     d.set(5, 1, 11); d.set(5, 2, 12); d.set(5, 3, 13); d.set(5, 4, 14); d.set(5, 5, 15);

//     // Display the matrix
//     d.display();

//     return 0;
// }

//method 2 colomn major
#include <iostream>
using namespace std;

class Diagonal
{
private:
    int n;   // Size of the matrix
    int *a;  // 1D array to store lower triangular elements

public:
    // Constructor to initialize matrix size and allocate memory
    Diagonal(int n)
    {
        this->n = n;
        a = new int[n * (n + 1) / 2];  // Size for lower triangular matrix in column-major
    }

    // Method to set the value of elements in lower triangular matrix
    void set(int i, int j, int x)
    {
        if (i >= j)
        {
            int index = (n * (j - 1) - (j - 2) * (j - 1) / 2) + (i - j);  // Column-major index formula for lower triangular matrix
            a[index] = x;  // Store the element
        }
    }

    // Method to get the value at position (i, j)
    int get(int i, int j)
    {
        if (i >= j)  // If it's part of the lower triangle
        {
            int index = (n * (j - 1) - (j - 2) * (j - 1) / 2) + (i - j);  // Get the element from 1D array
            return a[index];
        }
        else
        {
            return 0;  // Return 0 for non-lower triangular elements
        }
    }

    // Method to display the lower triangular matrix
    void display()
    {
        for (int i = 1; i <= n; i++)  // 1-based indexing
        {
            for (int j = 1; j <= n; j++)
            {
                if (i >= j)  // Display stored elements for lower triangle
                {
                    int index = (n * (j - 1) - (j - 2) * (j - 1) / 2) + (i - j);
                    cout << a[index] << " ";
                }
                else  // Display 0 for non-lower triangular elements
                {
                    cout << "0 ";
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
    Diagonal d(5); // Create a 5x5 lower triangular matrix

    // Set elements in the lower triangular matrix
    d.set(1, 1, 1);
    d.set(2, 1, 2); d.set(2, 2, 3);
    d.set(3, 1, 4); d.set(3, 2, 5); d.set(3, 3, 6);
    d.set(4, 1, 7); d.set(4, 2, 8); d.set(4, 3, 9); d.set(4, 4, 10);
    d.set(5, 1, 11); d.set(5, 2, 12); d.set(5, 3, 13); d.set(5, 4, 14); d.set(5, 5, 15);

    // Display the matrix
    d.display();

    return 0;
}
