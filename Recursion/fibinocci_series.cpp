// // Using loops
// #include<iostream>
// using namespace std;

// int fib(int n) { // Function to calculate the nth Fibonacci number using loops
//     int t0 = 0, t1 = 1, s, i; // Initialize first two Fibonacci numbers and variables for iteration
//     if (n <= 1) { // Check if n is 0 or negative
//         return n; // Return n (0 in this case)
//     }
    
//     for (int i = 2; i <= n; i++) { // Loop from 2 to n
//         s = t0 + t1; // Calculate the next Fibonacci number
//         t0 = t1; // Update t0 to the previous t1
//         t1 = s; // Update t1 to the current Fibonacci number
//     }
//     return s; // Return the nth Fibonacci number
// }

// int main() { // Main function
//     int n = 4; // Local variable n initialized to 4
//     cout << fib(n); // Call the fib function with n and print the result
//     return 0; // Return 0 to indicate successful execution
// }


// // Using recursion
// #include<iostream>
// using namespace std;

// int fib(int n) { // Recursive function to calculate the nth Fibonacci number
//     if (n <= 1) { // Base case: if n is 0 or 1
//         return n; // Return n (0 or 1)
//     }
//     else { // Recursive case
//         return fib(n - 2) + fib(n - 1); // Return the sum of the two previous Fibonacci numbers
//     }
// }

// int main() { // Main function
//     int n = 4; // Local variable n initialized to 4
//     cout << fib(n); // Call the fib function with n and print the result
//     return 0; // Return 0 to indicate successful execution
// }

//using memorization
#include<iostream>
using namespace std;
int f[10]; // Array to store Fibonacci numbers

int fib(int n) {
    if (n <= 1) {
        f[n] = n; // Base case: fib(0) = 0, fib(1) = 1
        return n;
    }
    
    if (f[n] == -1) { // If the value is not calculated, compute it
        if (f[n-2] == -1) {
            f[n-2] = fib(n-2); // Compute fib(n-2) if not already done
        }

        if (f[n-1] == -1) {
            f[n-1] = fib(n-1); // Compute fib(n-1) if not already done
        }

        f[n] = f[n-2] + f[n-1]; // Store the result in f[n]
    }

    return f[n]; // Return the stored result
}

int main() {
    int n = 4; // Local variable n initialized to 4

    // Initialize the array with -1 to indicate that values are not yet calculated
    for (int i = 0; i < 10; i++) {
        f[i] = -1;
    }

    cout << fib(n); // Call the fib function with n and print the result
    return 0; // Return 0 to indicate successful execution
}
