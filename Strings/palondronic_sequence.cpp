#include<iostream>
using namespace std;

int main() {
    int length = 6;  // Length of the string "madam" (including the null terminator)
    char a[length] = "madam";  // Original string
    char b[length];  // Array to store the reversed string
    int i, j;

    // Reverse the string 'a' into 'b'
    for (i = length - 2, j = 0; i >= 0; i--, j++) {
        b[j] = a[i];
    }
    b[j] = '\0';  // Add null terminator to the reversed string

    // Check if 'a' is equal to the reversed string 'b'
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] != b[i]) {
            cout << "Not a palindromic sequence" << endl;
            return 0;  // Exit early if characters don't match
        }
    }

    // If loop completes, the strings are palindromic
    cout << "Palindromic sequence" << endl;
    return 0;
}
