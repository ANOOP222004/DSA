#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    float breath;
};

int main()
{
      struct rectangle r;
 
    cout<<"enter the value of length ";
    cin >> r.length;

    cout<<"enter the value of breath ";
    cin >> r.breath;

  
    cout << "area of rectangle " << r.length * r.breath << endl;
    cout << "size of structure " << sizeof(r);

    return 0;
}