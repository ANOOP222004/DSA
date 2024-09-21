#include <iostream>
using namespace std;

// Structure for each element in the sparse matrix
struct element {
    int i; // row index
    int j; // column index
    int x; // value at (i, j)
};

// Structure for sparse matrix
struct sparse {
    int m;  // number of rows
    int n;  // number of columns
    int num; // number of non-zero elements
    struct element *e; // pointer to an array of elements
};

// Function to create a sparse matrix
void create(struct sparse *s) {
    cout << "Enter dimensions (rows and columns): " << endl;
    cin >> s->m >> s->n; // Reading matrix dimensions

    cout << "Enter the number of non-zero elements: " << endl;
    cin >> s->num; // Reading the number of non-zero elements

    s->e = new element[s->num]; // Dynamically allocating memory for elements

    cout << "Enter all non-zero elements (row, column, value):" << endl;
    for (int i = 0; i < s->num; i++) {
        cin >> s->e[i].i >> s->e[i].j >> s->e[i].x; // Reading each element
    }
}

// Function to display the full matrix, including zeros
void display(struct sparse s) {
    int k = 0;  // Index for the non-zero elements array

    // Iterate through the entire matrix
    for (int i = 1; i <= s.m; i++) {
        for (int j = 1; j <= s.n; j++) {
            // Check if the current position matches a stored element
            if (k < s.num && s.e[k].i == i && s.e[k].j == j) {
                cout << s.e[k].x << " "; // Print the non-zero element
                k++; // Move to the next non-zero element
            } else {
                cout << "0 "; // Print zero for empty positions
            }
        }
        cout << endl; // Move to the next row
    }
}

int main() {
    struct sparse s;

    create(&s);  // Create the sparse matrix
    cout << "\nDisplaying the sparse matrix in full form:\n";
    display(s);  // Display the full matrix

    // Free the allocated memory
    delete[] s.e;

    return 0;
}
