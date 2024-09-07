#include<iostream>
using namespace std;

int main(){
   int *p = new int[5]; // Dynamically allocate an array of size 5
   p[0] = 1; p[1] = 2; p[2] = 3; p[3] = 4; p[4] = 5; // Initialize the array

   int *q = new int[10]; // Dynamically allocate an array of size 10

   // Copy values from p to q
   for (int i = 0; i < 5; i++) {
       q[i] = p[i]; // Copy elements of p into q
   }

   delete[] p; // Free the memory of the old array
   p = q; // Now p points to the new array q
   q = NULL; // q is no longer needed, so set it to NULL

   // Output the elements of the new array
   for (int i = 0; i < 5; i++) {
       cout << p[i] << " ";
   }

   // Don't forget to free the new array's memory before the program ends
   delete[] p;

   return 0;
}
