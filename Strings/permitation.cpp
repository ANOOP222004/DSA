// //method 1
// #include<iostream>
// using namespace std;

// void perm(char s[], int k) {
//     static int a[10] = {0};  // Array to mark characters that are used in the permutation
//     static char res[10];     // Array to store the current permutation result
//     int i;

//     // Base case: if we have reached the end of the string, print the result
//     if (s[k] == '\0') {
//         res[k] = '\0';       // Null-terminate the result string
//         cout << res << endl; // Print the current permutation
//     } 
//     else {
//         // Loop through the characters in the input string
//         for (i = 0; s[i] != '\0'; i++) {
//             if (a[i] == 0) {  // If the character is not already used in the permutation
//                 res[k] = s[i]; // Place it in the current position of the result
//                 a[i] = 1;      // Mark the character as used
//                 perm(s, k + 1); // Recur for the next position
//                 a[i] = 0;      // Backtrack: Unmark the character to be used again
//             }
//         }
//     }
// }

// int main() {
//     char s[] = "abc";  // Input string
//     perm(s, 0);        // Call the permutation function starting with index 0
//     return 0;
// }

//using swaping
#include<iostream>
using namespace std;

// Function to swap two integers
void swap(char &a, char &b) {
    char temp;
    temp = a;  // Store the value of a in temp
    a = b;     // Assign the value of b to a
    b = temp;  // Assign the value of temp (original a) to b
}

// Function to generate all permutations of the string s from index l to h
void perm(char s[], int l, int h) {
    int i;

    // Base case: if l equals h, we've reached the end of the string
    if (l == h) {
        cout << s << endl;  // Print the current permutation
    } 
    else {
        // Loop through the characters in the string from index l to h
        for (i = l; i <= h; i++) {
            swap(s[l], s[i]);   // Swap the current character with the first character
            perm(s, l + 1, h);  // Recursively call perm for the remaining substring
            swap(s[l], s[i]);   // Swap back to restore the original order (backtracking)
        }
    }
}

int main() {
    char s[] = "abc";  // Input string
    perm(s, 0, 2);     // Call the permutation function starting with index 0
    return 0;          // Return 0 to indicate successful execution
}