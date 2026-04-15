#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin >> st;
    
    int sum = 0;

    for (int i = 0; i < st.size(); i++)
    {
        if(st[i] == '-1')
        {
            sum+=-1;
        }
        else if(st[i] == '1')
        {
            sum+=1;
        }
        else if(st[i] == '0')
        {
            sum+=0;
        }
    }

    cout << abs(sum) << "\n";

    return 0;
}