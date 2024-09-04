// // Recursion method 1 consumes more time
// #include<iostream>
// using namespace std;

// int pow(int m, int n) { // Recursive function to calculate m^n
//     if (n == 0) { // Base case: if exponent n is 0
//         return 1; // Return 1 (anything raised to the power of 0 is 1)
//     }
//     else { // Recursive case
//         return pow(m, n - 1) * m; // Recursive call with n-1 and multiply by m
//     }
// }

// int main() { // Main function
//     int m, n; // Declare variables m and n
//     cout << "enter the value m and n "; // Prompt user to enter values for m and n
//     cin >> m >> n; // Read the values of m and n from the user
//     cout << pow(m, n); // Call the pow function with m and n, and print the result
//     return 0; // Return 0 to indicate successful execution
// }

// // recursion method 2 conumes less time
// #include<iostream>
// using namespace std;

// int pow(int m,int n){
//     if (n==0)
//     {
//         return 1;
//     }
    
//     if (n%2==0)
//     {
//         return pow(m*m,n/2);
//     }
    
//     else
//     {
//         return pow(m*m,(n-1)/2)*m;
//     }
// }

// int main(){
//     int m;int n;
//     cout<<"enter the value m and n ";
//     cin>>m>>n;
//     cout<<pow(m,n);
//     return 0;
// }

//using loops
#include<iostream>
using namespace std;

int pow(int m, int n) { // Function to calculate m^n using an iterative approach
    int result = 1; // Initialize result to 1
    while (n > 0) { // Loop until n becomes 0
        if (n % 2 != 0) { // Check if n is odd
            result *= m; // If n is odd, multiply result by m
        }
        m *= m; // Square the base m
        n /= 2; // Reduce n by half
    }
    return result; // Return the final result
}

int main() { // Main function
    int m, n; // Declare variables m and n
    cout << "Enter the value of m and n: "; // Prompt user to enter values for m and n
    cin >> m >> n; // Read the values of m and n from the user
    cout << pow(m, n); // Call the pow function with m and n, and print the result
    return 0; // Return 0 to indicate successful execution
}