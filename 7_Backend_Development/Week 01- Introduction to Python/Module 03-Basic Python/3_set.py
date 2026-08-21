# set -> unique items collection

# List  --> []
# Tuple --> ()  : Duplicate thakta pare
# Set   --> {}  : Duplicate thakbe na

numbers = [12, 5, 3, 4, 12, 76] # array / list
print(numbers)

numbers_set = set(numbers) # set
print(numbers_set)

numbers_set.add(33) # add number
numbers_set.add(45)
print(numbers_set)

numbers_set.remove(33)
print(numbers_set)

for item in numbers_set:
    print(item)
    
if 45 in numbers_set:
    print("exsist")
    

A = {1, 3, 4, 5, 7}
B = {3, 5, 6, 7}

print(A & B)
print(A | B)

