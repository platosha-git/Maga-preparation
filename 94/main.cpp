#include <iostream>

using namespace std;

int f1(int x);
int f2(int x);

int f2(int x)
{
    if (x % 2 == 0) {
        return x * f1(x - 2) - 2;
    }
    return x * f2(x - 1);
}

int f1(int x)
{
    if (x < 2) {
        return x;
    }
    return f2(x + 1);
}

int main()
{
    cout << f2(6) << endl;
    return 0;
}
