// // Method 1: Printing a 2D array
// #include<iostream>
// using namespace std;

// int main() {
//     int a[3][4] = { {1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7} }; // Declare and initialize a 3x4 2D array
//     int i, j; // Variables for loop control
    
//     for (i = 0; i < 3; i++) { // Loop through each row
//         for (j = 0; j < 4; j++) { // Loop through each column in the current row
//             cout << a[i][j] << " "; // Print the element at position [i][j]
//         }
//         cout << endl; // Print a newline after each row
//     }
    
//     return 0; // Return 0 to indicate successful execution
// }


// //metod 2
// #include<iostream>
// using namespace std;

// int main() {
//     int *b[3]; // Array of pointers to int
//     int i, j;

//     // Allocate memory for each row
//     b[0] = new int[4];
//     b[1] = new int[4];
//     b[2] = new int[4];

//     // Initialize the 2D array
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 4; j++) {
//             b[i][j] = i + j; // Example initialization, you can change it
//         }
//     }

//     // Print the elements of the 2D array
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 4; j++) {
//             cout << b[i][j] << " "; // Print each element
//         }
//         cout << endl; // Move to the next line after each row
//     }

//     // Deallocate the memory for each row
//     for (i = 0; i < 3; i++) {
//         delete[] b[i];
//     }

//     return 0;
// }


//metod 3
#include<iostream>
using namespace std;

int main() {
    int **c;
    int i, j;

    // Allocate memory for an array of 3 pointers (each pointing to a 1D array)
    c = new int*[3];
    
    // Allocate memory for each 1D array of size 4
    for (i = 0; i < 3; i++) {
        c[i] = new int[4];
    }

    // Initialize the 2D array
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            c[i][j] = i + j; // Example initialization, you can change it
        }
    }

    // Output the elements of the 2D array
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            cout << c[i][j] << " "; // Print each element
        }
        cout << endl; // Move to the next line after each row
    }

    // Deallocate the memory for each row
    for (i = 0; i < 3; i++) {
        delete[] c[i];
    }

    // Deallocate the memory for the array of pointers
    delete[] c;

    return 0;
}