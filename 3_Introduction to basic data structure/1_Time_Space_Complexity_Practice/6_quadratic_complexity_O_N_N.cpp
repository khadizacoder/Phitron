#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) // O(N*N)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "Hello" << endl;
        }
    }

    //? Note: j > m -> tahole O(N*M) hoto
    //? Nested loop thakla * hobe r por por thakla + hobe

    return 0;
}