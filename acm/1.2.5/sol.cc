#include <iostream>
#define s(x) ((x) * (x))
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (s(a) + s(b) == s(c) || s(b) + s(c) == s(a) || s(c) + s(a) == s(b))
            cout << "good" << endl;
        else if (a == b || b == c || c == a)
            cout << "perfect" << endl;
        else
            cout << "just a triangle" << endl;
    }
}
