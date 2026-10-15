def fibonacci(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)

n = int(input("jumlah suku : "))
terms = [str(fibonacci(i)) for i in range(n)]
print(" ".join(terms))