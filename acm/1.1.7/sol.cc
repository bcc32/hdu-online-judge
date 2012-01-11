#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    for (cin >> a >> b; !cin.eof(); cin >> a >> b)
        cout << a + b << endl << endl;
}
