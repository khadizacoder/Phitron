// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int> l;

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int idx, val;
//         cin >> idx >> val;

//         if(idx < 0 || idx > l.size())
//         {
//             cout << "Invalid" << endl;
//             continue;
//         }

//         if(idx == 0)
//         {
//             l.push_front(val);
//         }
//         else if(idx == l.size())
//         {
//             l.push_back(val);
//         }else{
//             l.insert(next(l.begin(), idx), val);
//         }

//         for(int v : l)
//         {
//             cout << v << " ";
//         }
//         cout << endl;
//         l.reverse();
        
//         for(int v : l)
//         {
//             cout << v << " ";
//         }
//         cout << endl;
//         l.reverse();
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    int q;
    cin >> q;
    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

        if(idx < 0 || idx > l.size())
        {
            cout << "Invalid" << endl;
            continue;
        }

        if(idx == 0)
            l.push_front(val);
        else if(idx == l.size())
            l.push_back(val);
        else
            l.insert(next(l.begin(), idx), val);

        for(int v : l)
            cout << v << " " ;

        cout << endl;
        l.reverse();

        for(int v : l)
            cout << v << " ";

        cout << endl;
        l.reverse();
    }
    
    return 0;
}