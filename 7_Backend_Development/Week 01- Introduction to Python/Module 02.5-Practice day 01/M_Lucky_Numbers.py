def isLucky(n):
    st = str(n)
    
    for ch in st:
        if ch != '4' and ch != '7':
            return False
        
    return True

a, b = map(int, input().split())

lucky = []
for i in range(a,b + 1):
    if isLucky(i):
        lucky.append(i)
        
if len(lucky) == 0 :
    print(-1)
else:
    for i in lucky:
        print(i, end=" ")
