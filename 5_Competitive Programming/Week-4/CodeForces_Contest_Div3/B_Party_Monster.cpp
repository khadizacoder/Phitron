#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;

        int countFirst = 0, countSecond = 0;
        for(int i = 0; i < n; i++)
        {
            if(st[i] == '(')
                countFirst++;
            else if(st[i] == ')') countSecond++;
        }

        if(countFirst == countSecond)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}