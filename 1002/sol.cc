#include <iostream>
#include <algorithm>
#define ctoi(c) (int)(c) - (int)'0'
#define itoc(n) (char)(n) + '0'
using namespace std;

string add(string a, string b);

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Case " << i + 1 << ":" << endl;
        string a, b;
        cin >> a >> b;
        cout << a << " + " << b << " = " << add(a, b) << endl;
        if (i < n - 1)
            cout << endl;
    }
}

string add(string a, string b)
{
    string s;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    bool carry = false;
    for (int i = 0; i < a.size() || i < b.size(); i++)
    {
        int x = 0;
        if (i < a.size())
            x += ctoi(a[i]);
        if (i < b.size())
            x += ctoi(b[i]);
        if (carry)
            x++;
        if (x > 9) carry = true;
        else carry = false;
        s += itoc(x % 10);
    }
    if (carry)
        s += '1';
    reverse(s.begin(), s.end());
    return s;
}
