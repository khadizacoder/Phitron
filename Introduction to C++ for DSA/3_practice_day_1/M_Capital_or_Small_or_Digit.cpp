#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;

    if(c >= 'A' && c <= 'Z')
    {
        cout << "ALPHA" << endl << "IS CAPITAL";
    }
    else if(c >= 'a' && c <= 'z')
    {
        cout << "ALPHA" << endl << "IS SMALL";
    }
    else
    {
        cout << "IS DIGIT";
    }
    
    return 0;
}