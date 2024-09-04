// // Direct method
// #include<iostream>
// using namespace std;

// int main() { // main function
//     int n; // Declare variable n
//     cout << "enter the value of n "; // Prompt user to enter a value for n
//     cin >> n; // Read the value of n from the user
//     cout << n * (n + 1) / 2; // Calculate and print the sum of the first n natural numbers
//     return n * (n + 1) / 2; // Return the calculated sum
// }

// // Using loop
// #include<iostream> 
// using namespace std;

// int sum() { // Function to calculate the sum
//     int n; // Declare variable n
//     int s = 0; // Initialize sum variable s to 0
//     cout << "Enter the value of n: "; // Prompt user to enter a value for n
//     cin >> n; // Read the value of n from the user
//     for (int i = 1; i <= n; i++) { // Loop from 1 to n
//         s += i; // Add i to sum s
//     }
//     cout << s; // Print the sum
//     return s; // Return the sum
// }

// int main() { // Main function
//     sum(); // Call the sum function
//     return 0; // Return 0 to indicate successful execution
// }

#include <iostream>
using namespace std;

int sum(int n) { // Recursive function to calculate the sum
    if (n > 0) { // Check if n is greater than 0
        return sum(n - 1) + n; // Recursive call and add n to the result
    }
    else { // Base case
        return 0; // Return 0 when n is not greater than 0
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Sum: " << sum(n) << endl;
    return 0;
}
