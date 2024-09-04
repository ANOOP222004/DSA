// // Static variable
// #include<iostream>
// using namespace std;

// int fun(int n) { // Function definition
//     static int x = 0; // Static variable x initialized to 0
//     if (n > 0) { // Check if n is greater than 0
//         x++; // Increment static variable x
//         return fun(n - 1) + 5; // Recursive call and return value
//     }
//     return 0; // Base case, return 0 when n is not greater than 0
// }

// int main() { // Main function
//     int n = 5; // Local variable n initialized to 5
//     cout << fun(n); // Call the function fun with n and print the result
//     return 0; // Return 0 to indicate successful execution
// }


// Global variable
#include<iostream>
using namespace std;

int x = 0; // Global variable x initialized to 0

int fun(int n) { // Function definition
    if (n > 0) { // Check if n is greater than 0
        x++; // Increment global variable x
        return fun(n - 1) + x; // Recursive call and return value
    }
    return 0; // Base case, return 0 when n is not greater than 0
}

int main() { // Main function
    int n = 5; // Local variable n initialized to 5
    cout << fun(n); // Call the function fun with n and print the result
    return 0; // Return 0 to indicate successful execution
}
