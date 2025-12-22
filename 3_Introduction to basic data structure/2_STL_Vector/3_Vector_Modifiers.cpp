#include <bits/stdc++.h>
using namespace std;
int main()
{
    //* v= or v.assign()
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2;
    v2 = v;

    // for(int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " " ;
    // }

    //* v.pop_back() => last element delate
    v.pop_back();

    //* v.insert()  => koto number index a koto value add korta chai
    //    v.insert(v.begin()+3, 100);

    // array insert

    vector<int> v3 = {400, 500, 600, 700};
    v.insert(v.begin() + 2, v3.begin(), v3.end());

    //* v.erase() => value delate kora
    v.erase(v.begin() + 1); // 1 index value delate

    // v.erase(v.begin()+1, v.end()-2);
    v.erase(v.begin() + 1, v.begin() + 4);

    // Different way loop
    for (int x : v)
        cout << x << " ";

    cout << endl;
    //* replace(v.begin(),v.end(),value,replace_value)
    vector<int> vv = {1,2,3,4,2,2};
    // replace(vv.begin(), vv.end()-1, 2, 200);
    replace(vv.begin(), vv.end(), 2, 200);


    for(int x : vv)
        cout << x << " ";

    
    cout << endl;

    //* find(v.begin(),v.end(),V) => index bar kora jai na but * deay value bar kora jai

    auto it = find(vv.begin(), vv.end(), 200);
    if(it == vv.end())
        cout << "Not Found" << endl;
    else
        cout << *it << " => Found" << endl;



    return 0;
}