#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    int val;
    while (cin >> val)
    {
        if(val == -1) break;
        l.push_back(val);
    }

    list<int> l2 = l;
    l2.reverse();

    // for(int v : l)
    // {
    //     cout << v << " ";
    // }

    bool flag = true;
    for(int i = 0; i < l.size(); i++)
    {
        if(l != l2)
            flag = false;
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}