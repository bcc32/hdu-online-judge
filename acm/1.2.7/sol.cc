#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    string s;
    for (getline(cin, s); !cin.eof(); getline(cin, s))
    {
        vector<int> v(26);
        for (string::iterator it = s.begin(); it < s.end(); it++)
            if (*it >= 'a' && *it <= 'z')
                v[(int)*it - (int)'a']++;
        for (int i = 0; i < 26; i++)
            cout << (char)(i + 'a') << ":" << v[i] << endl;
        cout << endl;
    }
}
