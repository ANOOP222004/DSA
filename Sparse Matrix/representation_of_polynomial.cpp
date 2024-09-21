#include<iostream>
#include<cmath>
using namespace std;

// Structure for each term in the polynomial
struct term {
    int coeff; // Coefficient of the term
    int exp;   // Exponent of the term
};

// Structure for polynomial
struct poly {
    int n;     // Number of terms in the polynomial
    struct term *t; // Array of terms (each term has coefficient and exponent)
};

// Function to create the polynomial by reading the terms from the user
void create(struct poly *p) {
    cout << "Enter the number of terms: ";
    cin >> p->n; // Reading number of terms
    p->t = new term[p->n]; // Dynamically allocate memory for terms

    cout << "Enter the polynomial terms (coefficient and exponent):" << endl;
    for (int i = 0; i < p->n; i++) {
        cout << "Term " << i+1 << ": ";
        cin >> p->t[i].coeff >> p->t[i].exp; // Reading each term's coefficient and exponent
    }
}

// Function to display and evaluate the polynomial at a given value of x
void display(struct poly *p) {
    int x;
    cout << "Enter the value of x to evaluate the polynomial: ";
    cin >> x; // Reading the value of x

    int sum = 0;
    // Evaluate the polynomial at the given value of x
    for (int i = 0; i < p->n; i++) {
        sum += p->t[i].coeff * pow(x, p->t[i].exp); // Calculate term value and add to sum
    }

    // Display the sum (result of the polynomial evaluation)
    cout << "The result of the polynomial evaluation is: " << sum << endl;
}

int main() {
    struct poly p; // Declare a polynomial
    create(&p);    // Create the polynomial by reading terms from the user
    display(&p);    // Display and evaluate the polynomial
    return 0;
}
