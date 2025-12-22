/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int e = 0, g = 0, y = 0, p = 0, t = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'e' || s[i] == 'E')
        {
            e = e + 1;
        }
        else if (s[i] == 'g' || s[i] == 'G')
        {
            g = g + 1;
        }
        else if (s[i] == 'y' || s[i] == 'Y')
        {
            y = y + 1;
        }
        else if (s[i] == 'p' || s[i] == 'P')
        {
            p = p + 1;
        }
        else if (s[i] == 't' || s[i] == 'T')
        {
            t = t + 1;
        }
    }

    cout << min({e, g, y, p, t}) << endl;

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int e = 0, g = 0, y = 0, p = 0, t = 0;
    for(char c : s)
    {
        c = tolower(c);
        if(c == 'e') e++;
        else if(c == 'g') g++;
        else if(c == 'y') y++;
        else if(c == 'p') p++;
        else if(c == 't') t++;
    }
     cout << min({e,g,y,p,t});
    return 0;
}