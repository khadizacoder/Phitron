#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> url;

    string adr;
    while (true)
    {
        cin >> adr;
        if (adr == "end")
            break;
        url.push_back(adr);
    }

    int q;
    cin >> q;

    auto cur = url.begin();
    for (int i = 0; i < q; i++)
    {
        string val;
        cin >> val;

        if (val == "visit")
        {
            string addr;
            cin >> addr;

            bool res = false;
            for (auto it = url.begin(); it != url.end(); it++)
            {
                if (*it == addr)
                {
                    cur = it;
                    res = true;
                    break;
                }
            }

            if (res)
                cout << *cur << endl;
            else
                cout << "Not Available" << endl;
        }
        else if (val == "next")
        {
            if (cur != --url.end())
            {
                cur++;
                cout << *cur << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (val == "prev")
        {
            if (cur != url.begin())
            {
                cur--;
                cout << *cur << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
