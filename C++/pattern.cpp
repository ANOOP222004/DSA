#include <iostream>
using namespace std;

int main()
{
    int rows, colums;
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> colums;

    for (int j = 1; j <= rows; j++)
    {
        for (int n = 1; n <= colums; n++)
        {
            int colums1 = 0;
            colums1 += 1;
            for (int i = 1; i <= colums1; i++)
            {
                cout << "* ";
            }
           
        }
         cout << endl;
    }

    return 0;
}
