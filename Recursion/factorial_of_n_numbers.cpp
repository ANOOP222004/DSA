// // Using loops
// #include <iostream>
// using namespace std;

// int main() { // Main function
//     int fact = 1; // Initialize variable fact to 1
//     int n; // Declare variable n
//     cout << "enter the value of n "; // Prompt user to enter a value for n
//     cin >> n; // Read the value of n from the user

//     if (n > 0) { // Check if n is greater than 0
//         for (int i = 1; i <= n; i++) { // Loop from 1 to n
//             fact *= i; // Multiply fact by i
//         }
//         cout << fact; // Print the factorial
//         return fact; // Return the factorial
//     }
//     else { // If n is not greater than 0
//         return 1; // Return 1 (factorial of 0 or negative number is generally considered 1)
//     }

//     return 0; // Return 0 to indicate successful execution
// }

// Using recursion
#include<iostream>
using namespace std;

int fact(int n) { // Recursive function to calculate factorial
    if (n > 0) { // Check if n is greater than 0
        return fact(n - 1) * n; // Recursive call and multiply by n
    }
    else { // Base case
        return 1; // Return 1 when n is not greater than 0
    }
}

int main() { // Main function
    int n; // Declare variable n
    cout << "enter the value of n "; // Prompt user to enter a value for n
    cin >> n; // Read the value of n from the user
    cout << fact(n); // Call the fact function with n and print the result
    return 0; // Return 0 to indicate successful execution
}
