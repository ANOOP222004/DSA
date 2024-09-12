#include<iostream>
using namespace std;

const int size = 10; // fix the size of the array
int length = 6; // Declare length of the array (number of elements to print)

int main() {
    int a[size] = {1, 2, 3, 4, 5, 6}; // Initialize array 'a' with 6 elements, rest will be 0
    for (int i = 0; i < length; i++) { // Loop through the first 'length' elements of the array
        cout << a[i] << " "; // Print each element followed by a space
    }
    return 0; // Return 0 to indicate successful execution
}
