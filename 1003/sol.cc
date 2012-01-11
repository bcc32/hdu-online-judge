#include <iostream>
#include <vector>
#include <sstream>
#define max(a, b) ((a) > (b) ? (a) : (b))
using namespace std;

string kadane(vector<int> v); // Kadane's algorithm

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Case " << i + 1 << ":" << endl;
        int m;
        cin >> m;
        vector<int> v(m);
        for (int j = 0; j < m; j++)
            cin >> v[j];
        cout << kadane(v) << endl;
        if (i < n - 1)
            cout << endl;
    }
}

string kadane(vector<int> v)
{
    ostringstream ss;
    int f = 0, b = 0, x = 0, y = 0;
    for (int i = 0; i < v.size(); i++)
    {
        f = max(0, f + v[i]);
        if (f == 0)
            x = i + 1;// TODO
        b = max(b, f);
        if (b == f)
            y = i + 1;
    }
    ss << b << " " << x << " " << y;
    return ss.str();
}
