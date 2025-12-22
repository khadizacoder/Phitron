// Static memory problem

#include<bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int n = 10;
    p = &n;
    cout << "Fun -> " << *p << endl;

    return;
}
int main()
{
    fun();
    cout << "Main -> " << *p << endl; 

    return 0;
}