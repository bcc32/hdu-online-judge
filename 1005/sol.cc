#include <iostream>
using namespace std;

int f(int n, int a, int b);
int period(int a, int b);

int main(void)
{
    int a, b, n;
    for (cin >> a >> b >> n; a != 0 || b != 0 || n != 0; cin >> a >> b >> n)
        cout << f(n, a, b) << endl;
}

int f(int n, int a, int b)
{
    n %= period(a, b);
    int x = 1, y = 1;
    for (int i = 2; i < n; i++)
    {
        int t = (a * y + b * x) % 7;
        x = y;
        y = t;
    }
    return y;
}

int period(int a, int b)
{
    int x = a + b, y = a * (a + b) + b, n;
    for (n = 2; x != 1; n++)
    {
        int t = (a * y + b * x) % 7;
        x = y;
        y = t;
    }
    return n;
}
