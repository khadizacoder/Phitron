#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    int v;
    while (cin >> v)
    {
        if(v == -1) break;
        l.push_back(v);
    }

    l.sort();

    for(int v : l)
        cout << v << " ";
    
    return 0;
}