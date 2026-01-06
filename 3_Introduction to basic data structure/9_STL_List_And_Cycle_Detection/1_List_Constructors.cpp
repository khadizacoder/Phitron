#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> myList;
    // list<int> myList(10);

    // list<int> myList(10, 5);
    // cout << *myList.begin();

    list<int> myList = {1, 2, 3, 4, 5, 6};
    // list<int> myList2(myList);
    list<int> myList2(myList);

    for(auto it = myList2.begin(); it != myList2.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    // int a[5] = {2, 4, 6, 7, 9};
    // list<int> l(a, a+5);

    vector<int> v = {10, 20, 30, 40};
    list<int> l(v.begin(), v.end());
    
    for(int it : l)
    {
        cout << it << " ";
    }

    return 0;
}