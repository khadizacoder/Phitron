#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s, t;
        cin >> s >> t;

        int len_t = t.size();

        int idx = s.find(t);

        while (idx != string::npos)
        {
            s.replace(idx, len_t, "#");
            idx = s.find(t, idx + 1);
        }
        cout << s << endl;
    }

    return 0;
}