#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myStack st;
    myStack st2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        st.push(v);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int v;
        cin >> v;
        st2.push(v);
    }

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    bool flag = true;

    while (!st.empty())
    {
        if (st.top() != st2.top())
        {
            flag = false;
            break;
        }
        st.pop();
        st2.pop();
    }

    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}