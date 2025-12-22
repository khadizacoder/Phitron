// Dynamic memory

#include<bits/stdc++.h>
using namespace std;

int *p;
void fun()
{
    int *n = new int;
    *n = 100;
    p = n;

    cout << "fun -> " << *p << endl;

    return;
}
int main()
{
    fun();
    cout << "fun -> " << *p << endl;

    return 0;
} 