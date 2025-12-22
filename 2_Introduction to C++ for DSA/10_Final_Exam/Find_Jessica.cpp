#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string world;

    int flag = 0;

    while (ss >> world)
    {
        if(world == "Jessica")
        {
            flag = 1;
        }
    }

    flag == 1 ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}