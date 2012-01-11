#include <iostream>
#include <vector>
#define abs(x) ((x) > 0 ? (x) : -(x))
using namespace std;

int main(void)
{
    int n, i = 1;
    for (cin >> n; n != 0; cin >> n, i++)
    {
        cout << "Set #" << i << endl;
        vector<int> v(n);
        int s = 0, x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s += v[i];
        }
        int a = s / n;
        for (int i = 0; i < n; i++)
            x += abs(v[i] - a);
        cout << "The minimum number of moves is " << x / 2 << "." << endl
            << endl;
    }
}
