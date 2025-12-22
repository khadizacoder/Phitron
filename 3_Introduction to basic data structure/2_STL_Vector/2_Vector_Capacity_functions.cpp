#include <bits/stdc++.h>
using namespace std;
int main()
{
    //* v.capacity() -> value onujay capacity bere jai and double kore bare
    vector<int> v; 

    //* v.push_back()
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);

    // cout << v.capacity();

    //* v.clear() => size 0 hoi but vector mucha na
    // v.clear();
    // cout << v.size() << endl;
    // cout << v[2] << endl;

    //* v.resize() => vector size barano
    // v.resize(7);
    // cout << v.size() << endl;

    v.resize(10, 100); //* je gulai value dawa nai oi gulai 100 kore value set hobe
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }

    cout << endl;

    //* v.empty()
    if(v.empty() == true)
        cout << "Empty" << endl;
    else
        cout << "Not empty" << endl;


    return 0;
}