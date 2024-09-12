#include<iostream>
using namespace std;

struct arr {
    int length_of_a = 5; // Length of array a
    int length_of_b = 5; // Length of array b
    int length_of_c = length_of_a + length_of_b; // Length of array c, which is the sum of lengths of a and b
};

int main() {
    struct arr ar; // Create an instance of the arr structure
    int a[ar.length_of_a] = {2, 4, 5, 7, 9}; // Initialize array a with 5 elements
    int b[ar.length_of_b] = {2, 3, 6, 8, 10}; // Initialize array b with 5 elements
    int c[ar.length_of_c]; // Declare array c to store the merged elements
    int i = 0, j = 0, k = 0; // Initialize indices for arrays a, b, and c

    // Merge arrays a and b until one of them is fully traversed
    while (i < ar.length_of_a && j < ar.length_of_b) {
        if (a[i] < b[j]) { // If element in a is smaller than element in b
            c[k++] = a[i++]; // Add element from a to c and increment i and k
        } 
        else if (a[i] == b[j]) { // If element in a is equal to element in b
            c[k++] = a[i++]; // Add the common element to c from a and increment i and k
            c[k++] = b[j++]; // Add the same element from b to c and increment j and k
        } 
        else { // If element in b is smaller
            c[k++] = b[j++]; // Add element from b to c and increment j and k
        }
    }

    // Copy any remaining elements from a to c
    while (i < ar.length_of_a) {
        c[k++] = a[i++];
    }

    // Copy any remaining elements from b to c
    while (j < ar.length_of_b) {
        c[k++] = b[j++];
    }

    // Print the merged array c
    for (int i = 0; i < ar.length_of_c; i++) {
        cout << c[i] << " "; // Print each element of c
    }

    return 0; // Return 0 to indicate successful execution
}
