#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    list<int> l(v.begin(), v.end());

    // l.clear();

    if(l.empty()){
        cout << "Empty";
    }

    // l.resize(3);
    l.resize(7, 100);

    for(int it : l)
    {
        cout << it << " ";
    }

    return 0;
}