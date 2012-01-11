#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m, x, s = 0;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            s += x;
        }
        cout << s << endl;
        if (i < n - 1)
            cout << endl;
    }
}
