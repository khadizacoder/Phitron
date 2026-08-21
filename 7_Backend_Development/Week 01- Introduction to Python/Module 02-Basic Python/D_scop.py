balance = 70

def buy_things(item, price):
    # localscop a global variable use korta chayla global keyword use korta hobe
    global balance
    balance = price - balance;
    print(f"balance -> {item}", balance)

buy_things('sunglass', 1000)