// //used to acces string data from stack memory
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[] = {1, 2, 3, 4, 5};
//     int *p;
//     p = a;
//     for (int i = 0; i <= 5; i++)
//     {
//         cout << sizeof(a);
//         cout << p[i] << endl;
//         cout << a[i] << endl;
//     }

//     return 0;
// }

//used to acces string data in heap memory
#include <iostream>
using namespace std;
int main()
{
    int *p;
     p=new int[5];
     p[0]=2;
     p[1]=1;
     p[2]=9;
     p[3]=7;
     p[4]=3;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl; 
    }
    delete []p;
    p=NULL;

    return 0;
}
