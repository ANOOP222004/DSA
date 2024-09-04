//using loop, less time complexity
#include<iostream>
using namespace std;

double e(int x, int n) {
    double s = 1.0; // Initialize the sum as a double
    double numerator = 1.0; // To store the x^i values
    double denominator = 1.0; // To store the i! values
    
    for (int i = 1; i <= n; i++) {
        numerator *= x; // Compute x^i
        denominator *= i; // Compute i!
        s += numerator / denominator; // Add the term to the sum
    }
    
    return s; // Return the computed sum
}

int main() {
    int m, n;
    cout << "Enter the value of m and n: ";
    cin >> m >> n;
    cout << e(m, n); // Output the result
    return 0;
}
