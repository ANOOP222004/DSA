// #include<iostream>
// using namespace std;

// int main() {
//     int l = 0; // Lower bound
//     int h = 14; // Upper bound (last index of the array)
//     int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; // Array of 15 elements
//     int key; // The key to search for
//     cout << "Enter the value of the key: ";
//     cin >> key;

//     // Binary search loop
//     while (l <= h) {
//         int mid = (l + h) / 2; // Calculate mid-point
//         if (a[mid] == key) { // If the key is found at mid
//             cout << "Key found at index: " << mid << endl;
//             return mid; // Return the index where the key is found
//         } 
//         else if (key < a[mid]) { // If the key is smaller, search in the left half
//             h = mid - 1;
//         } 
//         else { // If the key is larger, search in the right half
//             l = mid + 1;
//         }
//     }

//     // If the key is not found in the array
//     cout << "Key not found." << endl;
//     return -1; // Return -1 if the key is not found
// }

#include<iostream>
using namespace std;

// Recursive binary search function
int binary_search(int a[], int l, int h, int key) {
    if (l <= h) {
        int mid = (l + h) / 2; // Calculate mid-point

        if (a[mid] == key) { // If the key is found at mid
            return mid;
        } 
        else if (key < a[mid]) { // If the key is smaller, search in the left half
             return binary_search(a, l, mid - 1, key);
        } 
        else { // If the key is larger, search in the right half
             return binary_search(a, mid + 1, h, key);
        }
    }

    // If the key is not found in the array
    return -1;
}

int main() {
    int l = 0; // Lower bound
    int h = 14; // Upper bound (last index of the array)
    int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}; // Array of 15 elements
    int key; // The key to search for
    
    cout << "Enter the value of the key: ";
    cin >> key;

    int result = binary_search(a, l, h, key); // Call the recursive binary search

    if (result != -1) {
        cout << "Key found at index: " << result << endl;
    } else {
        cout << "Key not found." << endl;
    }

    return 0;
}
