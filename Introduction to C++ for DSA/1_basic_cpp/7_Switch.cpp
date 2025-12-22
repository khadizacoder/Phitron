#include<iostream>
using namespace std;
int main()
{
    int day;
    cin >> day;

    switch(day)
    {
        case 1: cout << "Saturday";
            break;
        case 2: cout << "Sunday";
            break;
        case 3: cout << "Monday";
            break;
        default: cout << "wrong input";
    }
    
    return 0;
}