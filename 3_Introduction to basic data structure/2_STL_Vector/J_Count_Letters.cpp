#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> s;
    string x;

    while (cin >> x)
    {
        for (char c : x)
        {
            s.push_back(c);
        }
    }

    vector<int> fre(26, 0);
    for (char c : s)
    {
        int ch = c - 'a';
        fre[ch]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        {
            int ch = i + 'a';
            cout << (char) ch  << " : " << fre[i] << endl;
        }
    }

    return 0;
}