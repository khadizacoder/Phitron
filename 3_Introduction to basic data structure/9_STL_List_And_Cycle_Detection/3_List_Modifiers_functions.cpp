#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 20, 60, 20};
    list<int> l2;
    vector<int> v = {1, 2, 3, 4, 5};

    // l2.assign(l.begin(), l.end());
    // l2 = l;

    l.push_front(100);
    l.push_back(40);
    l.push_back(200);

    l.pop_back();
    l.pop_front();

    // spacipic elemint print
    // cout << *next(l.begin(), 1) << endl;

    // l.insert(next(l.begin(), 2), v.begin(), v.end());

    // l.erase(next(l.begin(), 2));
    // l.erase(next(l.begin(), 1), next(l.begin(), 4));

    // replace(l.begin(), l.end(), 20, 200);

    auto it = find(l.begin(), l.end(), 20);
    if(it == l.end())
    {
        cout << "Not found" << endl;
    }
    else{
        cout << "Found" << endl;
    }

    for(int it : l)
    {
        cout << it << " ";
    }

    return 0;
}