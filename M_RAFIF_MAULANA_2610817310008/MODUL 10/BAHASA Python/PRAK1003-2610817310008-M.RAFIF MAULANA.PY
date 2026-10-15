def sum_of_digits(n):
    if n < 10:
        return n
    return (n % 10) + sum_of_digits(n // 10)

n = int(input("bilangan : "))
print(f"Jumlah digit dari {n} adalah {sum_of_digits(n)}")