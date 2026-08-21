num = str(input())
rev = num[::-1]

print(int(rev))

if num == rev:
    print("YES")
else:
    print("NO")
        
        
        
        
"""
string s; cin >> s;
string cpy = s;
reverse(cpy.begin(), cpy.end());

cout << stoll(rev) << nl;
if(s == cpy)
    cout << "YES";
else cout << "NO";

"""