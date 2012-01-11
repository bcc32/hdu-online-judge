#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    for (cin >> a >> b; a != 0 || b != 0; cin >> a >> b)
        cout << a + b << endl;
}
