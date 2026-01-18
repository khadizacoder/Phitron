#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    list<int> l2;
    int val;
    while (cin >> val)
    {
        if(val == -1) break;
        l.push_back(val);
    }

    int val2;
    while (cin >> val2)
    {
        if(val2 == -1) break;
        l2.push_back(val2);
    }

    // for(int v : l)
    // {
    //     cout << v << " ";
    // }

    if(l.size() != l2.size())
    {
        cout << "NO" << endl;
    }else{
        bool flag = true;
        for(int i = 0; i < l.size() && i < l2.size(); i++)
        {
            if(l != l2){
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}