#include<iostream>
using namespace std;

int main() {
    const int size = 10; // Array size is fixed
    int a[size] = {1, 2, 3, 4, 5, 6}; // Initialize first 6 elements, rest will be 0
    int length = 6; // Length is the current number of elements

    if (length < size) {
        a[length] = 10; // Add the new element
        length++; // Increment the length
    } else {
        cout << "Array is full, cannot add more elements." << endl;
    }

    // Output the array to verify the result
    for (int i = 0; i < length; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
