#include<iostream>
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

// Function to display the polynomial
void display(struct poly p) {
    for (int i = 0; i < p.n; i++) {
        cout << p.t[i].coeff << "x^" << p.t[i].exp;
        if (i != p.n - 1) cout << " + ";
    }
    cout << endl;
}

// Function to add two polynomials and return the result
struct poly *add(struct poly *p1, struct poly *p2) {
    struct poly *sum = new poly;
    sum->t = new term[p1->n + p2->n]; // Allocate memory for the sum of polynomials
    int i = 0, j = 0, k = 0;

    // Add terms of p1 and p2 by comparing exponents
    while (i < p1->n && j < p2->n) {
        if (p1->t[i].exp > p2->t[j].exp) {
            sum->t[k++] = p1->t[i++];
        } else if (p1->t[i].exp < p2->t[j].exp) {
            sum->t[k++] = p2->t[j++];
        } else {
            sum->t[k].exp = p1->t[i].exp;
            sum->t[k++].coeff = p1->t[i++].coeff + p2->t[j++].coeff;
        }
    }

    // Add remaining terms from p1 (if any)
    while (i < p1->n) {
        sum->t[k++] = p1->t[i++];
    }

    // Add remaining terms from p2 (if any)
    while (j < p2->n) {
        sum->t[k++] = p2->t[j++];
    }

    sum->n = k; // Set the number of terms in the result polynomial
    return sum;
}

int main() {
    struct poly p1, p2, *p3;

    // Create two polynomials
    cout << "Create first polynomial:" << endl;
    create(&p1);

    cout << "Create second polynomial:" << endl;
    create(&p2);

    // Add the two polynomials
    p3 = add(&p1, &p2);

    // Display the sum of the two polynomials
    cout << "First polynomial: ";
    display(p1);

    cout << "Second polynomial: ";
    display(p2);

    cout << "Sum of polynomials: ";
    display(*p3);

    return 0;
}