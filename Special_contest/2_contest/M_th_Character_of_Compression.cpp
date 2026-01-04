#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long long int m;
    cin >> m;

    int len = 0;
    int res;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            len++;
            res = s[i];
        }
        else
        {
            int num = s[i] - '0'; // number char korlam
            len += num - 1; // len ar shate (num - 1) sum
        }
        if (len >= m) 
        {
            cout << (char)res << endl;
            return 0;
        }
    }

    return 0;
}