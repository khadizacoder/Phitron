num = [10,20,39,84,75,93, 15, 70]

odds=[]
for n in num:
    if n%2 == 1:
        odds.append(n)
        
print(odds)
# print(len(odds))


odd = []
for n in num:
    if n%2==1 and n%5 == 0:
        odd.append(n)
        
print(odd)

odd_nums = [n for n in num]
print(odd_nums)

odd_nums2 = [n for n in num if n % 2 == 1 if n % 5 == 0]
print(odd_nums2)


player = ["habib", "tamim", "khalid"]
age = [20, 38, 53]

age_com = []
for p in player:
    print ("Player ", p)
    for a in age:
        print(p, "age", a)
        age_com.append([p, a])

print(age_com)

age_com2 = [[p, a] for p in player for a in age]
print(age_com2)