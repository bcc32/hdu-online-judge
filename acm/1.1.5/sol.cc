#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int s = 0, x;
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            s += x;
        }
        cout << s << endl;
    }
}
