// // method 1
// #include <iostream>
// using namespace std;

// struct arr
// {
//     int size = 10;
//     int length = 10;
// };

// int main()
// {
//     // Create instance of struct
//     struct arr ar;

//     // Step 1: Declare and initialize array 'a' with constant size
//     int a[ar.size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Constant size array
//     int *p;
//     p = new int[ar.size];
//     // Step 2: Reverse array 'a' into array 'b'
//     for (int i = ar.length - 1, j = 0; i >= 0; i--, j++)
//     {
//         p[j] = a[i];
//     }

//     // Step 3: Copy reversed array 'b' back into array 'a'
//     for (int i = 0; i < ar.length; i++)
//     {
//         a[i] = p[i];
//     }

    // Step 4: Optional - Print the reversed array 'a'
    for (int i = 0; i < ar.length; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    delete[] p;
    p = null return 0;
}

//method 2 swap
#include<iostream>
using namespace std;

struct arr {
    int size = 10;
    int length = 10;
};

int main() {
    // Create instance of struct
    struct arr ar;

    // Step 1: Declare and initialize array 'a' with constant size
    int a[ar.size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Constant size array
    int temp;

    // Step 2: Reverse the array 'a' in place using two-pointer approach
    for (int i = 0, j = ar.length - 1; i < j; i++, j--) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    // Step 3: Print the reversed array 'a'
    for (int i = 0; i < ar.length; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
