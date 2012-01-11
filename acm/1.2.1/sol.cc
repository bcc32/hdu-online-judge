#include <iostream>
using namespace std;

int main(void)
{
    cin.setf(ios::hex, ios::basefield);
    int a, b;
    for (cin >> a >> b; !cin.eof(); cin >> a >> b)
        cout << a + b << endl;
}
