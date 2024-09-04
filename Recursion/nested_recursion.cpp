#include<iostream>
using namespace std;

int fun(int n) { // Function definition
    if (n > 100) { // Check if n is greater than 100
        return n - 10; // Return n - 10 if the condition is true
    }
    else { // If n is not greater than 100
        return fun(fun(n + 11)); // Recursively call fun with n + 11
    }
}

int main() { // Main function
    int n; // Declare variable n
    cout << "enter the value of n "; // Prompt user to enter a value for n
    cin >> n; // Read the value of n from the user
    cout << fun(n); // Call the function fun with n and print the result
    return 0; // Return 0 to indicate successful execution
}
