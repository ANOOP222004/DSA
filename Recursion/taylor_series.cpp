//taylor series for e^x and time complexity is more
#include<iostream>
using namespace std;

double e(int x, int n) { // Recursive function to calculate the value of e^x using series expansion
    static double p = 1, f = 1; // Static variables for power (p) and factorial (f)
    double r; // Variable to store the result of the recursive call
    if (n == 0) { // Base case: if n is 0
        return 1; // Return 1
    }
    else { // Recursive case
        r = e(x, n - 1); // Recursive call with n-1
        p = p * x; // Update power p
        f = f * n; // Update factorial f
        return r + p / f; // Return the sum of the previous result and current term
    }
}

int main() { // Main function
    int m, n; // Declare variables m and n
    cout << "Enter the value of m and n: "; // Prompt user to enter values for m and n
    cin >> m >> n; // Read the values of m and n from the user
    cout << e(m, n); // Call the e function with m and n, and print the result
    return 0; // Return 0 to indicate successful execution
}
