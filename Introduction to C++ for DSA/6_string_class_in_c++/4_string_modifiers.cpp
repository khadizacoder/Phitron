#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello Khadiza";
    string s1 = "Habiba";

    // s += s1;
    // cout << s << endl;

    //* Same
    // s.append(s1);
    // cout << s << endl;

    //* push_back()
    // s.push_back('A');
    // cout << s << endl;

    //* pop_back()
    // s.pop_back();

    //* assign
    // s = s1;
    // s.assign(s1);

    //* erase() -> kichu onsho delate
    // s.erase(3);
    // s.erase(3,4);
    
    //* replace()
    // s.replace(5, 2, "Khadiza");
    // s.replace(5, 0, "Khadiza");

    //* insert()
    s.insert(6, "Ami ");
    cout << s << endl;

    return 0;
}