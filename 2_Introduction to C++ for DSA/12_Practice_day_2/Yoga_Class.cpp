// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, x, y;
//         cin >> n >> x >> y;

//         if (y / 2 > x)
//         {
//             int type2 = n / 2;
//             int type1 = n % 2;
//             cout << type2 * y + type1 * x << endl;
//         }
//         else
//         {
//             cout << n * x << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        if (2 * x >= y)
        {
            cout << n * x << endl;
        }
        else
        {
            int type2 = n / 2;
            int type1 = n % 2;
            cout << type2 * y + type1 * x << endl;
        }
    }

    return 0;
}