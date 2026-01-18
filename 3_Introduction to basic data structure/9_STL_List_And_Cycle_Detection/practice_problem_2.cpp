// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int> l;
//     int val;
//     while (cin >> val)
//     {
//         if(val == -1) break;
//         l.push_front(val);
//     }
    
//     for(int v : l)
//     {
//         cout << v << " ";
//     }

//     return 0;
// }



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

    l.reverse();
    
    for(int v : l)
    {
        cout << v << " ";
    }

    return 0;
}