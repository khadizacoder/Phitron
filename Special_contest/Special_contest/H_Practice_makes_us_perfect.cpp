#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p1, p2, p3, p4;
    cin >> p1 >> p2 >> p3 >> p4;

    int cnt = 0;

    if(p1 >= 10) cnt+=1;
    if(p2 >= 10) cnt+=1;
    if(p3 >= 10) cnt+=1;
    if(p4 >= 10) cnt+=1;

    cout << cnt << endl;

    return 0;
}