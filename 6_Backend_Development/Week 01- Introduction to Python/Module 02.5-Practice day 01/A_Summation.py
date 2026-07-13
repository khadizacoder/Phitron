n = int(input())
arr = list(map(int, input().split()))

sum = 0
for i in range(n):
    sum+=arr[i]

if sum < 0:
    print(sum*-1)
else:
    print(sum)