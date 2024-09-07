//metod 2
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