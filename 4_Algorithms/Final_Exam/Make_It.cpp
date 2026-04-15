#include <bits/stdc++.h>
using namespace std;
int dp[100005];
bool recur(long long cur, long long tar)
{
    if (cur == tar) return true;
    if (cur > tar ) return false;

    if(dp[cur] != -1) return dp[cur];

    bool op1 = recur(cur+3, tar);
    bool op2 = recur(cur*2, tar);

    return dp[cur] = (op1 || op2);

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;

        memset(dp, -1, sizeof(dp));

        if (recur(1, n) == true) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}