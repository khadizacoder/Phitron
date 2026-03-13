#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        int max_idx = 0;
        int second_max_idx = -1;
        for (int i = 1; i < N; i++)
        {
            if (arr[i] > arr[max_idx])
            {
                second_max_idx = max_idx;
                max_idx = i;
            }
            else if (second_max_idx == -1 || arr[i] > arr[second_max_idx])
            {
                second_max_idx = i;
            }
        }
        if (max_idx >= second_max_idx)
            cout << second_max_idx << " " << max_idx << endl;
        else
            cout << max_idx << " " << second_max_idx << endl;
    }
    return 0;
}