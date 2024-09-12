#include<iostream>
using namespace std;

struct arr {
    int length_of_a = 5; // Length of array a
    int length_of_b = 5; // Length of array b
    int length_of_c = length_of_a + length_of_b; // Length of array c, which is the sum of lengths of a and b
};

int main() {
    struct arr ar; // Create an instance of the arr structure
    int a[ar.length_of_a] = {3,5,10,4,6}; // Initialize array a with 5 elements
    int b[ar.length_of_b] = {12,4,7,2,5}; // Initialize array b with 5 elements
    int c[ar.length_of_c]; // Declare array c to store the merged elements
    int i = 0, j = 0, k = 0; // Initialize indices for arrays a, b, and c

    for ( i = 0; i < ar.length_of_a; i++)
    {
        c[k++]=a[i];
    }

    for ( j = 0; j < ar.length_of_b; j++)
    {
        for (i = 0; i < ar.length_of_a; i++)
        {
            if (a[i] != b[j])
            {
                c[k++]=b[j++];
            }
            
            else
            {
                j++;
            }   
        } 
    }

    // Print the merged array c
    for (int i = 0; i < ar.length_of_c; i++) {
        cout << c[i] << " "; // Print each element of c
    }

    return 0; // Return 0 to indicate successful execution
}
