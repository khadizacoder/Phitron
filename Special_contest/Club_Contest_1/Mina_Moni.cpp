#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> coins(N);
        int total = 0;
        for(int i=0; i<N; i++){
            cin >> coins[i];
            total += coins[i];
        }
        int half = N/2;
        vector<set<int>> dp(half+1);
        dp[0].insert(0);

        for(int coin : coins){
            for(int i = half; i >=1; i--){
                for(int s : dp[i-1]){
                    dp[i].insert(s+coin);
                }
            }
        }

        int ans = INT_MAX;
        int pickSize = (N%2==0)? half : half+1;
        for(int s : dp[pickSize]){
            ans = min(ans, abs(total - 2*s));
        }
        cout << ans << "\n";
    }
    return 0;
}