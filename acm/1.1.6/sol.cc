#include <iostream>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; !cin.eof(); cin >> n)
    {
        int s = 0, x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            s += x;
        }
        cout << s << endl;
    }
}
