#include <iostream>
#define lcm(a, b) ((a) * (b) / gcd((a), (b)))
using namespace std;

int gcd(int a, int b);

int main(void)
{
    int a, b;
    for (cin >> a >> b; !cin.eof(); cin >> a >> b)
        cout << lcm(a, b) << endl;
}

int gcd(int a, int b)
{
    if (a < b) return gcd(b, a);
    while (a % b != 0)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return b;
}
