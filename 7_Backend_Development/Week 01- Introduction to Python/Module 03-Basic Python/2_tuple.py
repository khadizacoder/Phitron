def multiple():
    return 3, 4

print(multiple()) # Tuple

things = 'pen', 'book', 'pad', 'watter', 'notebook'
print(type(things))
print(things[0])
print(things[-1])

print(things[1:4])

for item in things:
    print(item)
    
if 'book' in things:
    print("Exsist")
    
print(len(things))

mega = ([1,2,3], [4,5,6])
print(type(mega))

print(mega[0])
mega[0][1] = 666
print(mega)