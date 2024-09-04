// Using loops
#include<iostream>
using namespace std;

int fib(int n) { // Function to calculate the nth Fibonacci number using loops
    int t0 = 0, t1 = 1, s, i; // Initialize first two Fibonacci numbers and variables for iteration
    if (n <= 1) { // Check if n is 0 or negative
        return n; // Return n (0 in this case)
    }
    
    for (int i = 2; i <= n; i++) { // Loop from 2 to n
        s = t0 + t1; // Calculate the next Fibonacci number
        t0 = t1; // Update t0 to the previous t1
        t1 = s; // Update t1 to the current Fibonacci number
    }
    return s; // Return the nth Fibonacci number
}

int main() { // Main function
    int n = 4; // Local variable n initialized to 4
    cout << fib(n); // Call the fib function with n and print the result
    return 0; // Return 0 to indicate successful execution
}