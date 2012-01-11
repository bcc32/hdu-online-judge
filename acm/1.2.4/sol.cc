#include <iostream>
using namespace std;

int main(void)
{
    cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char c;
        int a, b;
        cin >> c >> a >> b;
        if (c == '+')
            cout << a + b << endl;
        else if (c == '-')
            cout << a - b << endl;
        else if (c == '*')
            cout << a * b << endl;
        else if (c == '/')
            if (a % b == 0)
                cout << a / b << endl;
            else
                cout << (double)a / b << endl;
    }
}
