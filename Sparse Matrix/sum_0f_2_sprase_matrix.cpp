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

// Function to display the sparse matrix
void display(struct sparse s) {
    int k = 0;  // Index for the non-zero elements array

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

// Function to add two sparse matrices
struct sparse* add(struct sparse *s1, struct sparse *s2) {
    // Check if dimensions are the same
    if (s1->m != s2->m || s1->n != s2->n) {
        cout << "Matrices dimensions do not match!" << endl;
        return nullptr;
    }

    // Create a new sparse matrix for the result
    struct sparse *sum = new sparse;
    sum->m = s1->m;
    sum->n = s1->n;
    sum->e = new element[s1->num + s2->num]; // Maximum size can be the sum of non-zero elements from both matrices

    int i = 0, j = 0, k = 0;
    
    // Merging elements from both matrices
    while (i < s1->num && j < s2->num) {
        if (s1->e[i].i < s2->e[j].i || (s1->e[i].i == s2->e[j].i && s1->e[i].j < s2->e[j].j)) {
            sum->e[k++] = s1->e[i++]; // Copy element from first matrix
        }
        else if (s2->e[j].i < s1->e[i].i || (s2->e[j].i == s1->e[i].i && s2->e[j].j < s1->e[i].j)) {
            sum->e[k++] = s2->e[j++]; // Copy element from second matrix
        }
        else {
            // Same row and column in both matrices
            sum->e[k] = s1->e[i];
            sum->e[k++].x = s1->e[i++].x + s2->e[j++].x; // Add their values
        }
    }

    // Copy remaining elements from the first matrix
    while (i < s1->num) {
        sum->e[k++] = s1->e[i++];
    }

    // Copy remaining elements from the second matrix
    while (j < s2->num) {
        sum->e[k++] = s2->e[j++];
    }

    sum->num = k; // Update the number of non-zero elements
    return sum;
}

int main() {
    struct sparse s1, s2, *s3;

    // Create two sparse matrices
    cout << "Matrix 1:" << endl;
    create(&s1);

    cout << "Matrix 2:" << endl;
    create(&s2);

    // Add the two matrices
    s3 = add(&s1, &s2);

    if (s3 != nullptr) {
        // Display the result
        cout << "\nSum of the two matrices:" << endl;
        display(*s3);

        // Free memory
        delete[] s3->e;
        delete s3;
    }

    // Free memory
    delete[] s1.e;
    delete[] s2.e;

    return 0;
}
