#include<iostream>
using namespace std;

int main(){
    char a[] = "painter";
    char b[] = "painting";
    int i, j;

    // Loop through both strings to compare character by character
    for (i = 0, j = 0; a[i] != '\0' && b[j] != '\0'; i++, j++) {
        if (a[i] != b[j]) {
            break;  // Exit loop if characters differ
        }
    }
    
    // Check the result after the loop
    if (a[i] == b[j]) {
        cout << "a and b are equal" << endl;
    }
    else if (a[i] < b[j]) {
        cout << "a is smaller" << endl;
    }
    else {
        cout << "a is larger" << endl;
    }

    return 0;
}
