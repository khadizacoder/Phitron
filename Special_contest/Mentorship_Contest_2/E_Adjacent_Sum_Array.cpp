#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;

        long long B[N-1];
        for(int i=0;i<N-1;i++) cin >> B[i];

        sort(B, B+N-1); // sort B to simplify reconstruction

        long long A[N];
        // simple guess: first element = 1
        A[0] = 1;
        A[1] = B[0] - A[0];

        // reconstruct the rest
        for(int i=1;i<N-1;i++) {
            A[i+1] = B[i] - A[i];
        }

        // print the array
        for(int i=0;i<N;i++) cout << A[i] << " ";
        cout << "\n";
    }
    return 0;
}
