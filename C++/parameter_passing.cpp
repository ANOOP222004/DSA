// //call by value
// #include <iostream>
// using namespace std;
// int temp;

// void swap(int x, int y)
// {
//     temp = x;
//     x = y;
//     y = temp;
// }

// int main()
// {
//     int a,b;
//     a = 10;
//     b = 20;
//     swap(a,b);
//     cout<<a<<b;
//     return 0;
// }

// //call by adress
// #include <iostream>
// using namespace std;
// int temp;

// void swap(int *x, int *y)
// { 
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main()
// {
//     int a,b;
//     a = 10;
//     b = 20;
//     swap(a,b);
//     cout<<a<<b;
//     return 0;
// }

//call by reference
#include <iostream>
using namespace std;
int temp;

void swap(int &x, int &y)
{
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a,b;
    a = 10;
    b = 20;
    swap(a,b);
    cout<<a<<b;
    return 0;
}