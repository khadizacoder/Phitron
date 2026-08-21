t = int(input())

while t > 0:
    n = int(input())
    arr = list(map(int, input().split()))
    
    ans = []
    for i in range(n):
        for j in range(i, n):
            mx = arr[i]
            
            for k in range(i, j+1):
                # print(arr[k], end=" ")
                mx = max(mx,arr[k])
                
            ans.append(mx)

                
    for i in ans:
        print(i, end=" ")
    print()
    t-=1