// Problem link : https://codeforces.com/problemset/problem/1997/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;

        int n = st.size();
        vector<int> freq(26, 0);
        for (int i = 0; i < n; i++)
        {
            freq[st[i] - 'a']++;
        }

        char addchar;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] == 0)
            {
                addchar = i + 'a';
                break;
            }
        }

        int idx = -1;
        for(int i = 0; i < n; i++)
        {
            if(st[i] == st[i+1])
                idx = i+1;

        }

        if(idx == -1)
        {
            cout << addchar << st << '\n';
        }
        else{
            st.insert(idx, 1, addchar);
            cout << st << '\n';
        }

        // cout << endl;
    }
    return 0;
}