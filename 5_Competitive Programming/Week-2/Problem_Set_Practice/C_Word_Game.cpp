// Problem Link: https://codeforces.com/problemset/problem/1722/C

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<string> p1(n), p2(n), p3(n);
        map<string, int> freq;

        int pone = 0, ptwo = 0, pthree = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> p1[i];
            freq[p1[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> p2[i];
            freq[p2[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> p3[i];
            freq[p3[i]]++;
        }

        for (auto p : p1)
        {
            if (freq[p] == 1)
                pone += 3;
            else if (freq[p] == 2)
                pone += 1;
        }

        for(auto p : p2)
        {
            if(freq[p] == 1) ptwo+=3;
            else if(freq[p] == 2) ptwo+=1;
        }

        for(auto p : p3)
        {
            if(freq[p] == 1) pthree+=3;
            else if(freq[p] == 2) pthree+=1;
        }

        cout << pone << " " << ptwo << " " << pthree;
        cout << endl;
    }

    return 0;
}