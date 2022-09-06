#include <iostream>

using namespace std;

int f1(int x);
int f2(int x);

int f2(int x)
{
    if (x % 2 == 0) {
        return 2 * f1(x - 1);
    }
    return f1(x - 3);
}

int f1(int x)
{
    if (x > 2) {
        return x * f2(x);
    }
    return x;
}

int main()
{
    cout << f1(6) << endl;
    return 0;
}
