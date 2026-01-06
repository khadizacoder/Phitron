#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 40, 10, 50, 50, 60};

    // l.remove(10);

    // l.sort();
    // l.sort(greater<int> ());

    // sorted na thakle kaj kore na -> ata sudu unique value rakhe same value 2 bar rakha na
    // l.unique();

    l.reverse();

    for(int it : l)
    {
        cout << it << " ";
    }
    return 0;
}