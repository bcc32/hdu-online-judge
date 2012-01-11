#include <iostream>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        int x = 0, t = 0;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            if (z > x)
            {
                t += (z - x) * 6;
                x = z;
            }
            else if (z < x)
            {
                t += (x - z) * 4;
                x = z;
            }
            t += 5;
        }
        cout << t << endl;
    }
}
