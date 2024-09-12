#include<iostream>
using namespace std;

int main() {
    int n = 10;
    int a[n] = {5, 8, 3, 9, 6, 2, 10, 7, -1, 4};
    
    // Initialize min and max with the first element of the array
    int min = a[0];
    int max = a[0];

    // Traverse the array to find the min and max values
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        } 
        if (a[i] > max) {
            max = a[i];
        }
    }

    // Print the results
    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;

    return 0;
}
