#include <iostream>
#include <map>
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        int mn = 0;
        string ms = "";
        map<string, int> m;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            if (m.find(s) == m.end())
                m[s] = 1;
            else m[s]++;
            if (m[s] > mn)
            {
                ms = s;
                mn = m[s];
            }
        }
        cout << ms << endl;
    }
}
