name = "khadiza"

name1 = """
    Ami astachi
    aktu daraw
    r vul korbo na
"""

print(name)
print(name1)

# for char in name:
#     print(char)

# print(name[3])
# print(name[1:5])
# print(name[5:1:-1])
# print(name[::-1])

for i in range(len(name)-1, -1, -1):
    print(name[i])
    
if 'vul' in name1:
    print("Exisist")
    
    
print(name1.upper())