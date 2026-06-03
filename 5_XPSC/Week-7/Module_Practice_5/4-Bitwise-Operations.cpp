#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool check_kth_bit_on_and_of(int n, int k)
{
    return (n >> k) & 1;
}

bool check_kth_bit_on_or_of(int n, int k)
{
    return (n >> k) | 1;
}

bool check_kth_bit_xor(int n, int k)
{
    return (n >> k) ^ 1;
}

void print_on_and_off_all_bits(int n)
{
    for(int k = 8; k >= 0; k--)
    {
        if(check_kth_bit_on_and_of(n, k))
            cout << 1 << " ";
        else cout << 0 << " ";
    }
}

int trun_on_kth_bit(int n, int k)
{
    return (n | (1 << k));
}

int trun_of_kth_bit(int n, int k)
{
    return (n &(~(1 << k)));
}

int toggle_kth_bit(int n, int k)
{
    return (n ^ (1 << k));
}

int main()
{
    fastIO();

    int n = 45, k = 4;
    // int ans = (n >> k) & 1;
    // int ansXor = (n >> k) ^ 1;
    // cout << "AND -> " <<  ans << nl;
    // cout << "XOR -> " << ansXor << nl;

    // cout << "AND -> " << check_kth_bit_on_and_of(n, k) << nl;
    // cout << "OR -> " << check_kth_bit_on_or_of(n, k) << nl;
    // cout << "XOR -> " << check_kth_bit_xor(n, k) << nl;

    // shob gula bit ar moddhe kon bit 1 and kon bit 0 check
    // print_on_and_off_all_bits(n);

    // kth bit 1 korta chayle
    cout << trun_on_kth_bit(n,k) << nl;

    cout << trun_of_kth_bit(45, 3) << nl;

    // on thakle of hobe r of thakle on hobe
    cout << "Toggle -> " << toggle_kth_bit(n, k) << nl;
    cout << "Toggle -> " << toggle_kth_bit(n, 3) << nl;

    return 0;
}