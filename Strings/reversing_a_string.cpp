#include<iostream>
using namespace std;

// Function to swap two elements by reference
void swap(char &a, char &b) {
    char temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int length = 6;  // Length includes the null character '\0'
    char a[length] = "anoop";  // Define string

    // Loop to reverse the string
    for (int i = 0, j = length - 2; i < j; i++, j--) {
        swap(a[i], a[j]);
    }

    // Print the reversed string
    cout << "Reversed string: " << a << endl;
    return 0;
}
