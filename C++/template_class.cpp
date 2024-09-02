#include <iostream>
using namespace std;

template <class t>
class arithametic
{
private:
    t a;
    t b;

public:
    arithametic(t a, t b);
    t add();
    t sub();
};

template <class t>
arithametic<t>::arithametic(t a, t b)
{
    this->a = a;
    this->b = b;
}

template <class t>
t arithametic<t>::add()
{
    t c;
    c = a + b;
    return c;
}

template <class t>
t arithametic<t>::sub()
{
    t c;
    c = a - b;
    return c;
}

int main()
{
    arithametic<int> ar(10, 5);
    cout << ar.add() << endl;
    cout << ar.sub();
    return 0;
}