// Problem link: https://codeforces.com/problemset/problem/918/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<string,string>> st1;
    for(int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        st1.push_back({name,ip});
    }

    for(int i = 0; i < m; i++)
    {
        string config, ip;
        cin >> config >> ip;
        ip.pop_back();

        for(int j = 0; j < n; j++)
        {
            if(st1[j].second == ip)
            {
                cout << config << " " << ip << "; #" << st1[j].first << '\n';
            }
        }
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     map<string, string> mp;

//     for(int i = 0; i < n; i++)
//     {
//         string name, ip;
//         cin >> name >> ip;
//         mp[ip] = name;
//     }

//     for(int i = 0; i < m; i++)
//     {
//         string config, ip;
//         cin >> config >> ip;

//         ip.pop_back(); // remove ';'

//         cout << config << " " << ip << ";"
//              << " #" << mp[ip] << '\n';
//     }

//     return 0;
// }