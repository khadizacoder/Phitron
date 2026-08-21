def full_name(first, last = "khan"):
    name = f'{first} {last}'
    return name

name = full_name('khadiza', 'khatun')
print(name)

n = full_name(last = "lodu", first= "kodu")
print(n)

def famus_name(first, last, **addition):
    name = f'{first} {last} {addition}'
    print(addition)
    print(addition['title'])
    for key, val in addition.items():
        print(f'{key} -> {val}')
    return name

nam = famus_name(first='aminul', last='islam', title = 'taheri', addition='hasan', hid='hujur')
print(nam)


def a_lot(num1,num2):
    sum = num1 + num2
    mult = num1 * num2
    remunder = num1 - num2
    return sum, mult, remunder

evrithing = a_lot(10,20)
print("tupple -> ", evrithing)