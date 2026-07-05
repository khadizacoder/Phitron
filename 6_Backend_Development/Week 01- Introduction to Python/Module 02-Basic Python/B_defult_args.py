def sum(n1,n2 = 0, n3 = 0):
    res = n1 + n2 + n3
    return res

total = sum(10,20,15)
print(total)

# args
def all_sum(*num):
    print(num)
    cnt = 0;
    for n in num:
        print(n)
        cnt += n
    return cnt

sum = all_sum(10,20,30)
print("All sum ->", sum)