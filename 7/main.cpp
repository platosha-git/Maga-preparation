#include <iostream>
#include <typeinfo>

using namespace std;

template <typename T>
T bar(T&& x)
{
    x += 5;
    return x;
}

template <typename T>
T foo(T&& x)
{
    //auto y = bar(++x);
    //auto z = bar(x + 5);

    cout << typeid(x).name() << endl;
    //cout << typeid(y).name() << endl;
    //cout << typeid(z).name() << endl;

    return 0;
    //return x + y + z;
}

int main()
{
    auto x = 0;
    cout << foo(x);
    return 0;
}
