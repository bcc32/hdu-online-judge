#include <iostream>
#define p2(x) (1 << (x))
using namespace std;

int main(void)
{
    int n;
    for (cin >> n; n != 0; cin >> n)
    {
        int i;
        for (i = 0; n % p2(i) == 0; i++);
        cout << p2(i - 1) << endl;
    }
}
