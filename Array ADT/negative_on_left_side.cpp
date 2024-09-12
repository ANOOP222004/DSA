#include<iostream>
using namespace std;

struct arr {
    int size = 10;
    int length = 10;
};

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    struct arr ar;
    int a[ar.length] = {-5, 3, -4, 4, 5, -3, -2, 6, -6, 8}; // Initialize array
    int i = 0, j = ar.length - 1;

    // Two-pointer technique to move negatives to left and positives to right
    while (i < j) {
        // Move 'i' to the first positive number
        while (a[i] < 0 && i < j) {
            i++;
        }

        // Move 'j' to the first negative number from the right
        while (a[j] >= 0 && i < j) {
            j--;
        }

        // Swap positive number at 'i' with negative number at 'j'
        if (i < j) {
            swap(a[i], a[j]);
        }
    }

    // Print the rearranged array
    for (int k = 0; k < ar.length; k++) {
        cout << a[k] << " ";
    }
    cout << endl;

    return 0;
}
