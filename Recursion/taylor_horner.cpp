// Using recursion, less time complexity
#include<iostream>
using namespace std;

double e(int x, int n) { // Recursive function to calculate the value of e^x using series expansion
    static double s = 1; // Static variable to accumulate the series sum
    if (n == 0) { // Base case: if n is 0
        return s; // Return the accumulated sum
    }
    else { // Recursive case
        s = 1 + x * s / n; // Update the sum with the current term
        return e(x, n - 1); // Recursive call with n-1
    }
}

int main() { // Main function
    int m, n; // Declare variables m and n
    cout << "Enter the value of m and n: "; // Prompt user to enter values for m and n
    cin >> m >> n; // Read the values of m and n from the user
    cout << e(m, n); // Call the e function with m and n, and print the result
    return 0; // Return 0 to indicate successful execution
}
