#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x % 2 == 0)
    {
        cout << x <<  " -> Even" << endl;
    }
    else{
        cout << x << " -> Odd" << endl; 
    }
}