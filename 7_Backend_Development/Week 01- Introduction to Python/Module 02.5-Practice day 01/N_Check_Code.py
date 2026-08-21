a,b = map(int, input().split())
s = input()

if s[a] != '-':
    print('No')
else:
    ok = True
    
    for i in range(len(s)):
        if i == a:
            continue

        if not s[i].isdigit():
            ok = False

    if ok:
        print("Yes")
    else:
        print("No")