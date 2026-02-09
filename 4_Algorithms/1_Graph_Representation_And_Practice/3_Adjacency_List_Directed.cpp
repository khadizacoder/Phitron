#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, E;
    cin >> N >> E;
 
    vector<int> adjList[N]; // array of vector

    while (E--)
    {
        int A, B;
        cin >> A >> B;
        adjList[A].push_back(B);
    }

    for(int i = 0; i < N; i++)
    {
        cout << i << " -> ";
        for(int X : adjList[i])
        {
            cout << X << " ";
        }
        cout << endl;
    }
    
    return 0;
}