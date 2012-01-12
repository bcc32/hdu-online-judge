#include <iostream>
#define n(x) ((x) % 2 == 0 ? (x) / 2 : 3 * (x) + 1)
using namespace std;

int l(long long n);

int main(void)
{
    for (int i = 1; i < 1000000; i++)
        cerr << i << " " << l(i) << endl;
    int a, b;
    for (cin >> a >> b; !cin.eof(); cin >> a >> b)
    {
        long long max = 0;
        for (int i = a; i <= b; i++)
        {
            long long len = l(i);
            if (len > max)
                max = len;
        }
        cout << a << " " << b << " " << max << endl;
    }
}

int l(long long n)
{
    int i;
    for (i = 1; n != 1; i++)
        n = n(n);
    return i;
}
