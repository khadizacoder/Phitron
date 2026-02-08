#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, A, B;
        cin >> N >> A >> B;

        vector<int> V(N);
        for (int i = 0; i < N; i++)
            cin >> V[i];

        int cnt = 0;
        int wining = false;
        for (int i = 0; i < N; i++)
        {
            if (V[i] < A)
            {
                if (!wining)
                {
                    cnt++;
                    wining = true;
                }
            }
            else if (V[i] > B)
            {
                wining = false;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int N, A, B;
//         cin >> N >> A >> B;

//         int V[N];
//         for(int i = 0; i < N; i++)
//             cin >> V[i];

//         int count = 0;        // কতবার jacket পরলো
//         bool wearing = false; // এখন jacket আছে কিনা

//         for(int i = 0; i < N; i++) {
//             if(V[i] < A) {
//                 if(!wearing) {
//                     count++;
//                     wearing = true;   // এখন jacket পরে ফেললো
//                 }
//             }
//             else if(V[i] > B) {
//                 wearing = false;     // jacket খুললো
//             }
//         }
//         cout << count << endl;
//     }

//     return 0;
// }
