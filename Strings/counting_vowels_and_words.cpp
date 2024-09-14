// //for countinf vowels
// #include<iostream>
// using namespace std;

// int main() {
//     char s[] = "how are you";  // String initialization
//     int i, vcount = 0;  // Initialize vcount to 0

//     // Loop to count vowels in the string
//     for (i = 0; s[i] != '\0'; i++) {
//         if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || 
//             s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
//             vcount++;  // Increment vowel count
//         }
//     }

//     cout << "Vowel count: " << vcount << endl;  // Print the vowel count
//     return 0;
// }

//for counting words
#include<iostream>
using namespace std;

int main() {
    char s[] = "how are you";  // String initialization
    int i, wcount = 1;  // Initialize word count to 1 since there's at least one word

    // Loop to count words in the string by counting spaces
    for (i = 0; s[i] != '\0'; i++) {  // Loop until the null terminator is reached
        if (s[i] == ' ') {  // If a space is found, it's a word separator
            wcount++;  // Increment word count
        }
    }

    cout << "Word count: " << wcount << endl;  // Print the word count
    return 0;  // Return 0 to indicate successful execution
}
