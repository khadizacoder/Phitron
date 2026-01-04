#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int fre[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        fre[s[i] - 'a']++;
    }

     for (int i = 0; i < s.size(); i++)
    {
        if (fre[s[i] - 'a'] == 1)
        {
            cout << s[i] << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}