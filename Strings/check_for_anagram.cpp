#include<iostream>
using namespace std;

int main() {
    char a[] = "decimal";
    char b[] = "medical";
    int i, h[26] = {0};  // Array to store frequency of characters in 'a'

    // Step 1: Count frequencies of characters in string 'a'
    for (i = 0; a[i] != '\0'; i++) {
        h[a[i] - 97]++;  // Increment frequency for each character in 'a'
    }

    // Step 2: Decrease frequencies based on characters in string 'b'
    for (i = 0; b[i] != '\0'; i++) {
        h[b[i] - 97]--;  // Decrement frequency for each character in 'b'
        if (h[b[i] - 97] < 0) {  // If frequency becomes negative, strings are not anagrams
            cout << "Not anagram" << endl;
            return 0;  // Exit if strings are not anagrams
        }
    }

    // Step 3: If the loop completes without issues, the strings are anagrams
    cout << "Anagram" << endl;
    return 0;
}
