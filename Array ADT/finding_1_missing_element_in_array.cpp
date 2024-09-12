// //for 1 to n numbers
// #include<iostream>
// using namespace std;

// int main(){
//     int a[11]={1,2,3,4,5,6,8,9,10,11,12};

//     for (int i = 0; i < 11; i++)
//     {
//         if (a[i] != i+1)
//         {
//             cout<<a[i]-1;
//             break;
//         }
        
//     }
//     return 0;
// }

//method 2
#include<iostream>
using namespace std;

int main(){
    int a[11]={6,7,8,9,10,11,13,14,15,16,17};
    int n=a[0];
    for (int i = 0; i < 11; i++)
    {
        if (a[i] != n+i)
        {
            cout<<a[i]-1;
            break;
        }
        
    }
    return 0;
}