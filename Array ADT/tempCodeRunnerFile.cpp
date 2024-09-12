//for unsorted array
// #include<iostream>
// using namespace std;

// int main() {
//     int k = 10;
//     int n = 10;
//     int a[n] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};

//     // Find the maximum element in the array to initialize the hash table correctly
//     int maxElement = a[0];
//     for (int i = 1; i < n; i++) {
//         if (a[i] > maxElement) {
//             maxElement = a[i];
//         }
//     }

//     // Create the hash table (array) based on the maximum element in the array
//     int* h = new int[maxElement + 1]();  // Dynamically allocate and initialize to 0

//     // Find and print pairs whose sum is equal to 'k'
//     for (int i = 0; i < n; i++) {
//         if (k - a[i] >= 0 && h[k - a[i]] > 0) {
//             cout << "Pair is: " << a[i] << " and " << k - a[i] << endl;
//         }
//         h[a[i]]++;  // Increment the frequency of the current element in the hash table
//     }

//     delete[] h;  // Free the dynamically allocated memory
//     return 0;
// }