#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";

    //* size()
    cout << s.size() << endl;

    //* max_size()
    // cout << s.max_size() << endl;

    //* capacity()
    // cout << s.capacity() << endl;

    //* clear()
    // s.clear();
    // cout << s << endl;

    //* empty()
    if(s.empty() == true)
    {
        cout << "Empty" << endl;
    }
    else{
        cout << "Not Empty" << endl;
    }

    //* resize()
    s.resize(3);
    cout << s << endl;

    s.resize(7, 'x');
    cout << s << endl;

    return 0;
}