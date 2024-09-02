// for data present in stack memory
//  #include <iostream>
//  using namespace std;
//  struct rectangle
//  {
//      int length;
//      int breath;
//  };
//  int main()
//  {
//      struct rectangle r = {10, 5};
//      struct rectangle *p = &r;
//      cout << p->length << endl;
//      cout << p->breath;
//      return 0;
//  }

//used for accesing data from heap memory
#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breath;
};

int main()
{

    struct rectangle *p; 
    p = new struct rectangle;
    p->length = 10;
    p->breath = 5;
    cout << p->length << endl;
    cout << p->breath << endl;

    return 0;
}