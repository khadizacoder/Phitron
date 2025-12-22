#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;

    cin.ignore(); // getline spach input nawa problem solve (1 input ignor kora)

    char c[100];
    // cin >> c;

    cin.getline(c,100); // spach soho input nawar jonno

    cout << c << endl;


    // sorasori (string) variable neta pari

    string s;
    cin >> s;
    cout << s;

    return 0;
} 