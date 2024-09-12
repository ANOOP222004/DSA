//for 1 to n numbers
#include<iostream>
using namespace std;

int main(){
    int a[11] = {1, 2, 4, 5, 6, 8, 11, 12, 13, 14, 15};  // Array with missing numbers
    int n = 15;  // Sequence up to number 15
    int j = 0;   // Pointer to traverse the array

    // Loop through the expected numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        if (a[j] != i) {
            cout << i << " ";  // Print missing number
        } else {
            j++;  // Move to the next array element if it matches the expected number
        }
    }

    return 0;
}

// //method 2
// #include<iostream>
// using namespace std;

// int main() {
//     int a[11] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};  // Sequence with multiple missing numbers
//     int n = a[0];  // First number in sequence

//     for (int i = 0; i < 11; i++) {
//         while (a[i] != n) {  // If the current element is not the expected one
//             cout << n << " ";  // Print the missing number
//             n++;  // Move to the next expected number
//         }
//         n++;  // Move to the next expected number after matching a[i]
//     }

//     return 0;
// }
