#include <iostream>
#define tu(c) ((c) >= 'a' && (c) <= 'z' ? (char)((c) - 32) : (c))
#define tl(c) ((c) >= 'A' && (c) <= 'Z' ? (char)((c) + 32) : (c))
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (string::iterator it = s.begin(); it < s.end(); it++)
            if (*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' ||
                *it == 'u' || *it == 'A' || *it == 'E' || *it == 'I' || 
                *it == 'O' || *it == 'U')
                cout << tu(*it);
            else
                cout << tl(*it);
        cout << endl;
    }
}
