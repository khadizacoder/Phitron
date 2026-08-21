n = int(input())
arr = list(map(int, input().split()))

# print(arr)

# mn = arr[0]
# mx = arr[0]

# for i in range(n):
#     # print(i, end=" ")
#     if arr[i] < mn:
#         mn = arr[i]
        
#     if arr[i] > mx:
#         mx = arr[i]

mn = min(arr)
mx = max(arr)

for i in range(n):
    if arr[i] == mn:
        arr[i] = mx
    elif arr[i] == mx:
        arr[i] = mn
        
# print(mn, mx)
for i in range(n):
    print(arr[i], end=" ")
