// Problem Link: https://codeforces.com/problemset/problem/44/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    set<string> st;
    int count = 0;

    for(int i = 0; i < N; i++)
    {
        string s;
        getline(cin, s);

        if(st.find(s) == st.end())
        {
            st.insert(s);
            count++;
        }
    }
    cout << count << '\n';

    return 0;
}