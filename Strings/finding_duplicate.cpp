// //method 1
// #include<iostream>
// using namespace std;

// int main() {
//     char a[] = "finding";
//     int h[26] = {0};  // Initialize the hash array to 0
//     int i;

//     // Increment frequency of each character
//     for (i = 0; a[i] != '\0'; i++) {
//         h[a[i] - 97]++;  // Subtract 'a' (ASCII 97) to fit in 0-25 range
//     }
    
//     // Check and print duplicates
//     for (i = 0; i < 26; i++) {
//         if (h[i] > 1) {
//             cout << "Character: " << char(i + 97) << " appears " << h[i] << " times" << endl;
//         }
//     }

//     return 0;
// }

//using bitwise operator
#include<iostream>
using namespace std;

int main() {
    char a[] = "finding";  // String with duplicate characters
    int h = 0, x = 0;  // h will store the bitmask, x will be used for shifting
    int repeated = 0;  // This will track characters that appear more than once

    // Loop through the string
    for (int i = 0; a[i] != '\0'; i++) {
        x = 1;  // Reset x to 1 for each character
        x = x << (a[i] - 97);  // Shift x to the position corresponding to the character

        // If the character has been encountered once before, mark it as repeated
        if ((x & h) > 0) {
            repeated = repeated | x;  // Track repeated characters
        } else {
            h = x | h;  // Set the bit in 'h' for this character
        }
    }

    // Print only characters that appeared more than once
    for (int i = 0; i < 26; i++) {
        if (repeated & (1 << i)) {
            cout << "Duplicate character: " << char(i + 97) << endl;
        }
    }

    return 0;
}
