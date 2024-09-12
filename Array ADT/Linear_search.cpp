// // Method 1: Linear search in an array
// #include<iostream>
// using namespace std;

// int main() {
//     const int size = 10; // Array size is fixed
//     int a[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Initialize the array with 10 elements
//     int length = 10; // Length is the current number of elements
//     int key = 11; // The key to search for in the array

//     for (int i = 0; i < length; i++) { // Loop through the array
//         if (key == a[i]) { // If the key is found at index i
//             cout << i; // Print the index where the key is found
//             return i; // Return the index
//         }
//     }
//     cout<<"key not found";
//     return -1; // If the key is not found, return -1
// }

// //method 2: transposition
// #include<iostream>
// using namespace std;

// void swap(int &a, int &b) { // Pass by reference to modify the original values
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     const int size = 10; // Array size is fixed
//     int a[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Initialize the array with 10 elements
//     int length = 10; // Length is the current number of elements
//     int key = 6; // The key to search for in the array

//     bool found = false; // Flag to track if the key is found

//     for (int i = 0; i < length; i++) { // Loop through the array
//         if (key == a[i]) { // If the key is found at index i
//             if (i > 0) { // Ensure that i is not 0 to avoid out-of-bounds access
//                 swap(a[i], a[i-1]); // Swap with the previous element
//             }
//             cout << "Key found at index: " << i << endl;
//             found = true; // Mark the key as found
//             break; // Stop the loop after finding the key
//         }
//     }

//     if (!found) {
//         cout << "Key not found in the array." << endl; // Print message if key not found
//     } else {
//         // Output the array to verify the result if the key was found
//         cout << "Modified array: ";
//         for (int i = 0; i < length; i++) {
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }

//     return 0; // Return 0 to indicate successful execution
// }

//method 3: move to front/head
#include<iostream>
using namespace std;

void swap(int &a, int &b) { // Pass by reference to modify the original values
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    const int size = 10; // Array size is fixed
    int a[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Initialize the array with 10 elements
    int length = 10; // Length is the current number of elements
    int key = 5; // The key to search for in the array

    bool found = false; // Flag to track if the key is found

    for (int i = 0; i < length; i++) { // Loop through the array
        if (key == a[i]) { // If the key is found at index i
            if (i > 0) { // Ensure that i is not 0 to avoid out-of-bounds access
                swap(a[i], a[0]); // Swap with the previous element
            }
            cout << "Key found at index: " << i << endl;
            found = true; // Mark the key as found
            break; // Stop the loop after finding the key
        }
    }

    if (!found) {
        cout << "Key not found in the array." << endl; // Print message if key not found
    } else {
        // Output the array to verify the result if the key was found
        cout << "Modified array: ";
        for (int i = 0; i < length; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0; // Return 0 to indicate successful execution
}
