def reverse(n):
    hasil = 0
    while n > 0:
        hasil = hasil * 10 + n % 10
        n = n // 10
    return hasil

data = input().split()
A = int(data[0])
B = int(data[1])
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))