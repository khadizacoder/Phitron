#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    bool found = false;

    for(int i = A; i <= B; i++)
    {
        int x = i;
        bool lucky = true;

        while(x > 0)
        {
            int digit = x % 10;

            if(digit != 4 && digit != 7)
            {
                lucky = false;
                break;
            }

            x /= 10;
        }

        if(lucky)
        {
            cout << i << " ";
            found = true;
        }
    }

    if(!found)
        cout << -1;

    return 0;
}