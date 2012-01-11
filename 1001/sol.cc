#include <iostream>
using namespace std;

int main(void)
{
    long long n;
    for (cin >> n; !cin.eof(); cin >> n)
        cout << n * (n + 1) / 2 << endl << endl;
}
