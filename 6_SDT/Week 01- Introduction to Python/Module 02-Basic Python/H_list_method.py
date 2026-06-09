numbers = [10, 28, 93, 48, 58, 67]

numbers.append(20)
print(numbers)

# insert(index, value)
numbers.insert(2, 40)
print(numbers)

# pop(index)
numbers.pop(4)
print(numbers)

# remove(value)
numbers.remove(20)
print(numbers)

if 40 in numbers:
    numbers.remove(40)
    
if 39 in numbers:
    numbers.remove(39)
    
print(numbers)

# numbers.clear();
# print(numbers)

# koto index a value ta ace
if 5 in numbers:
    index = numbers.index(5)
    print(index)
    
if 67 in numbers:
    print(numbers.index(67))
    
numbers.reverse()
print(numbers)

numbers.sort()
print(numbers)