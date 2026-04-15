#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string st;
        cin >> st;
        string ans = "";

        for(int i = 0; i < st.size(); i+=2)
        {
            char letter = st[i];
            char nextNum = st[i+1];
            
            int cnt = nextNum - '0';
            for(int j = 0; j < cnt; j++)
                ans+=letter;
        }
        cout << ans << "\n";
    }
    return 0;
}