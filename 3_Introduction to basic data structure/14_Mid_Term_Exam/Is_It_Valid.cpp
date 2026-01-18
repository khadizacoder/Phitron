#include <bits/stdc++.h>
using namespace std;
bool empty_check(string &s)
{
    stack<char> st;
    for (auto c : s)
    {
        if (st.empty())
        {
            st.push(c);
        }
        else
        {
            if(st.top() == '0' && c == '1' || st.top() == '1' && c == '0')
            {
                st.pop();
            }
            else{
                st.push(c);
            }
        }
    }
    return st.empty();
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        string val;
        cin >> val;
        if (empty_check(val))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}