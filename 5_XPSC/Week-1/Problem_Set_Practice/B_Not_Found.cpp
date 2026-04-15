#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin >> st;

    vector<int> arr(26, 0);
    for (int i = 0; i < st.size(); i++)
    {
        arr[st[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 0)
        {
            char x = i + 'a';
            cout << x << '\n';
            return 0;
        }
    }
    cout << "None\n";

    return 0;
}