// //for a same case string
// #include<iostream>
// using namespace std;

// int main() {
//     char s[] = "WELCOME";  // String initialization with uppercase letters
//     int i;

//     // Loop to convert each character to lowercase
//     for (i = 0; s[i] != '\0'; i++) { // Continue until null terminator is reached
//         s[i] += 32;  // Convert uppercase letters to lowercase by adding 32 to ASCII values
//     }

//     cout << "Converted string: " << s << endl;  // Print the converted string
//     return 0;  // Return 0 to indicate successful execution
// }

//for toogling string
#include<iostream>
using namespace std;

int main() {
    char s[] = "wELCoMe";  // String initialization
    int i;

    // Loop to toggle each character's case
    for (i = 0; s[i] != '\0'; i++) {
        
        if (s[i] >= 65 && s[i] <= 90) {  // Check if it's an uppercase letter (A-Z)
            s[i] += 32;  // Convert uppercase to lowercase by adding 32 to ASCII value
        }
        else if (s[i] >= 97 && s[i] <= 122) {  // Check if it's a lowercase letter (a-z)
            s[i] -= 32;  // Convert lowercase to uppercase by subtracting 32 from ASCII value
        }
    }

    cout << "Toggled string: " << s << endl;  // Print the toggled string
    return 0;
}
 