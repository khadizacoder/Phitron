/*
! name          complexity      n == 1000       konta best
? Constant      =>  O(1)        ->  1           -> num 1 (shob thske valo)
? Linear        =>  O(N)        ->  1000        -> num 4
? Logarithic    =>  O(logN)     ->  10          -> num 2
? Square root   =>  O(sqrt(N))  ->  32          -> num 3
? Quadratic     =>  O(N*N)      ->  1000000     -> num 6 (shob thske kharap)
? Linearithmic  =>  O(NlogN)    ->  10000       -> num 5
*/

//? 2 ta complextiy thake best ta bar korta hole 2 tar same man dhore jar oparation kom hobe setai best hobe

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a+n);   //! Complexity -> O(NlogN)

    for(int x : a)
    {
        cout << x << " ";
    }

    return 0;
}