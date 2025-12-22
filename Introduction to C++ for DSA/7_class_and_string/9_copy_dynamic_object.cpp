#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
	int jersey_no;
	string country;
    Cricketer (int jersey_no, string country)
    {
        this->jersey_no = jersey_no;
        this->country = country;
    }
};
int main()
{
    Cricketer *dhoni = new Cricketer(100, "Bangladesh");
    Cricketer *kohli  = new Cricketer(30, "India");

    // kohli=dhoni;

    // kohli->jersey_no = dhoni->jersey_no;
    // kohli->country = dhoni->country;
    *kohli = *dhoni;

    // cout << kohli->jersey_no << endl;
    // cout << dhoni->jersey_no << endl;

    delete dhoni;

    cout << kohli->jersey_no << " " << kohli->country << endl;

    return 0;
}