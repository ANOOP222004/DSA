#include<iostream>
using namespace std;

int main() {
    const int size = 10; // Array size is fixed
    int a[size] = {1, 2, 3, 4, 5, 6}; // Initialize first 6 elements, rest will be 0
    int length = 6; // Length is the current number of elements
    int index = 5; // Index where the new element should be inserted
    int x; // Value to be inserted

    cout << "Enter the value of x: ";
    cin >> x;

    if (length < size) {
        // Shift elements to the right from the end to the index
        for (int i = length; i > index; i--) {
            a[i] = a[i - 1]; // Shift elements
        }
        a[index] = x; // Insert the new element at the index
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