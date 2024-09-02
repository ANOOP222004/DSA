// //to acces from stack memory
// #include <iostream>
// using namespace std;

// void fun(int a[ ], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << endl;
//     }
// }

// int main(){
//     int a[5]={1,2,3,4,5};
//     fun(a,5);
//     return 0;
// }

// // modifing array using fun
// #include <iostream>
// using namespace std;

// int * fun(int n)
// {
//     int *p;
//     p = new int [n];
//     return (p);
// }

// int main()
// {
//     int *a;
//         a = fun(5);
//         for (int i = 0; i < 5; i++)
//         {
//             cout<<a<<endl;
//         }
        
//     return 0;
// }

// return an array of a parameter
#include <iostream>
using namespace std;

void fun(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    fun(a, 5);
    return 0;
}