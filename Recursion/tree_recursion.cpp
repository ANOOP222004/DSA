#include<iostream> // Including the input-output stream header file
using namespace std; // Using the standard namespace

// A recursive function 'fun' that takes an integer 'n' as a parameter
void fun(int n){
    if(n > 0){ // Base condition to check if 'n' is greater than 0
        cout << n; // Print the value of 'n'
        fun(n - 1); // First recursive call with 'n-1'
        fun(n - 1); // Second recursive call with 'n-1'
    }
}

int main(){
    fun(3); // Call the function 'fun' with the initial value of 3
    return 0; // Return 0 to indicate successful execution
}
