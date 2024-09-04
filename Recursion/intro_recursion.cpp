// //head recursion or calling
// #include<iostream>
// using namespace std;

// void fun1(int n){ // Add int n as a parameter
//     if (n > 0)
//     {
//         cout << n << " "; // Print n
//         fun1(n-1); // Recursive call with n-1
//     }
// }

// int main(){
//     int x;
//     cout << "Enter a positive integer: ";
//     cin >> x; // Input value for x
//     fun1(x); // Pass x to fun1
//     return 0; // Return 0 at the end of main
// }

//tail recursion or returning type
#include<iostream>
using namespace std;

void fun1(int n){ // Add int n as a parameter
    if (n > 0)
    {
        fun1(n-1); // Recursive call with n-1
        cout << n << " "; // Print n
    }
}

int main(){
    int x;
    cout << "Enter a positive integer: ";
    cin >> x; // Input value for x
    fun1(x); // Pass x to fun1
    return 0; // Return 0 at the end of main
}