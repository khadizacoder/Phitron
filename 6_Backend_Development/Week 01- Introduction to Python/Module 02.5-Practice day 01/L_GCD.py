# a = int(input())

a,b = map(int, input().split())

# for i in range(1, a+1):
#     if a%i == 0:
#         print(i)
    
gcd = 1    
for i in range(1, min(a,b)+1):
    if a%i == 0 and b%i == 0:
        gcd = i

print(gcd)


#! Final Code
# n, m = map(int, input().split())
# g = 1
# for i in range(1, min(a,b)+1):
#     if a%i == 0 and b%i == 0:
#         g = i
        
# print(g)