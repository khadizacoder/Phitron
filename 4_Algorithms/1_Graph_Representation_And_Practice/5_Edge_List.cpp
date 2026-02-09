#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, E;
    cin >> N >> E;

    vector<pair<int, int>> edgeList;

    while (E--)
    {
        int A, B;
        cin >> A >> B;
        edgeList.push_back({A, B});
    }

    for(pair<int, int> p : edgeList)
    {
        cout << p.first << " " << p.second << endl;
    }
    
    return 0;
}