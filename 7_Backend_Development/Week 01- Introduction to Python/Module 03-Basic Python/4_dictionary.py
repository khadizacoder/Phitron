numbers = [12, 44, 65, 23, 98, 54]
person = ['khadiza', 20, 'programmer']

# Dictionary --> key value pair
persons = {'name': 'khadiza', 'age': 20, 'profation': 'programmer'}

print(persons)
# print(persons['age'])
# print(persons['profation'])
persons['name'] = 'habiba'

for key in persons:
    print(key)
    
del persons['age']

for key, val in persons.items():
    # print(key,':', val)
    print(f'{key} : {val}')
    
for i, num in enumerate(numbers): # tuple ar index value pring ar jonni
    print(f'{i} : {num}')