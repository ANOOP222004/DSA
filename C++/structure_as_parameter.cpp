// // using call by value
// #include <iostream>
// using namespace std;

// struct rectangle
// {
//     int length;
//     int breath;
// };

// int area(rectangle r1)
// { // struct rectangle or rectangle
//     int c;
//     c = r1.length * r1.breath;
//     return c;
// }

// int main(){
//     struct rectangle r={10,5};
//     cout<<area(r);
//     return 0;
// }

// // using call by reference
// #include <iostream>
// using namespace std;

// struct rectangle
// {
//     int length;
//     int breath;
// };

// int area(rectangle &r1)
// { // struct rectangle or rectangle
//     int c;
//     r1.length=5;
//     c = r1.length * r1.breath;
//     return c;
// }

// int main(){
//     struct rectangle r={10,5};
//     cout<<area(r);
//     cout<<r.length*r.breath<<endl;
//     return 0;
// }

// // using call by adress
// #include <iostream>
// using namespace std;

// struct rectangle
// {
//     int length;
//     int breath;
// };

// void change_length(rectangle *p,int l)
// { // struct rectangle or rectangle
//     p->length=l;
//     cout<<p->length;
// }

// int main(){
//     struct rectangle r={10,5};
//     change_length(&r,20);
//     cout<<r.length;
//     return 0;
// }

// difference for array and struct
#include <iostream>
using namespace std;

struct test
{
    int a[5];
    int n;
};

void fun(struct test t1)
{
    t1.a[0] = 3;
    t1.a[3] = 1;
    cout<<t1.a<<endl;
    
}

int main()
{
    struct test t = {{1, 2, 3, 4, 5}, 5};
    fun(t);
    cout << fun(t);
    return 0;
}
