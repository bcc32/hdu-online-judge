#include <iostream>
using namespace std;

int main(void)
{
    int a, b, n;
    for (cin >> a >> b >> n; a != 0 || b != 0 || n != 0; cin >> a >> b >> n)
    {
        int x = 1, y = 1;
        for (int i = 2; i < n; i++)
        {
            int t = (a * y + b * x) % 7;
            x = y;
            y = t;
        }
        cout << y << endl;
    }
}
