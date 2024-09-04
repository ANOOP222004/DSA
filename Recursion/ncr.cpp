// //stadard method
// #include<iostream>
// using namespace std;

// int fact(int n) { // Function to calculate factorial
//     if (n <= 1) { // Base case: fact(0) and fact(1) are both 1
//         return 1;
//     }
//     return fact(n - 1) * n; // Recursive call and multiply by n
// }

// int c(int n, int r) {
//     if (r > n) {
//         return 0; // Combination is not defined if r > n
//     }
//     int t1 = fact(n);
//     int t2 = fact(r);
//     int t3 = fact(n - r);
//     return t1 / (t2 * t3); // Correct formula for combinations
// }

// int main() {
//     int n = 4, r = 2;
//     cout << c(n, r); // Output the result of combination
//     return 0;
// }

//using recursion
#include<iostream>
using namespace std;

int c(int n,int r){
    if(r==0||n==r)
    {
        return 1;
    }

    else
    {
        return c(n-1,r-1)+c(n-1,r);
    }
}

int main() {
    int n = 3, r = 2;
    cout << c(n, r); // Output the result of combination
    return 0;
}