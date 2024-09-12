//method 1 for sorted array
// #include<iostream>
// using namespace std;

// int main() {
//     int n = 10; // Length of the array
//     int a[n] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20}; // Initialize the array with values
//     int last_duplicate = 1; // Variable to store the last duplicate value, initialized to 1
    
//     // Loop through the array to find and print duplicate elements
//     for (int i = 0; i < n - 1; i++) {
//         // Check if the current element is equal to the next one and is not the last duplicate found
//         if (a[i] == a[i + 1] && a[i] != last_duplicate) {
//             cout << a[i] << " "; // Print the duplicate element
//             last_duplicate = a[i]; // Update last_duplicate to the current element
//         }
//     }
    
//     return 0; // Return 0 to indicate successful execution
// }

//method 2 using hash table for both sorted and unsorted array
#include<iostream>
using namespace std;

int main() {
    int n = 10;
    int a[n] = {8,3,6,4,6,5,6,8,2,7};

    // Fix: Use dynamic size for hash table (array) based on the largest element in 'a'
    int maxElement = a[n-1];  // Last element of the sorted array 'a'
    int* h = new int[maxElement + 1]();  // Dynamically allocate and initialize to 0

    // Populate the hash table with the frequency of each element in array 'a'
    for (int i = 0; i < n; i++) {
        h[a[i]]++;
    }

    // Check for duplicates and print the result
    for (int i = 0; i <= maxElement; i++) {
        if (h[i] > 1) {
            cout << "Number " << i << " is duplicated " << h[i] << " times" << endl;
        }
    }

    delete[] h;  // Free the dynamically allocated memory
    return 0;
}

