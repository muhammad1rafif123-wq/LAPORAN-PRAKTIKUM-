multiple = int(input("kelipatan : "))
symbol = input("simbol : ")

for i in range(1, 51):
    if i % multiple == 0:
        print(symbol, end=" ")
    else:
        print(i, end=" ")
print()
