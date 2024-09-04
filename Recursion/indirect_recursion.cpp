#include<iostream>
using namespace std;

void funb(int n); // Forward declaration of funb

void funa(int n){
    if (n > 0) {
        cout << n << " ";  // Print the current value of n
        funb(n - 1);        // Call funb with n-1
    }
}

void funb(int n){
    if (n > 1) {           // Ensure this condition allows termination
        cout << n << " ";  // Print the current value of n
        funa(n / 2);       // Call funa with n/2
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    funa(n);  // Start the recursion with funa
    return 0;
}
