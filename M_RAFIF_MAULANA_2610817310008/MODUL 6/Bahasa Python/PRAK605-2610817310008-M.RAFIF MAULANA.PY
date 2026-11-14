n = int(input())

print("Matriks A")
a = [[0] * n for _ in range(n)]
for i in range(n):
    row = input().split()
    for j in range(n):
        a[i][j] = int(row[j])
print("Matriks B")
b = [[0] * n for _ in range(n)]
for i in range(n):
    row = input().split()
    for j in range(n):
        b[i][j] = int(row[j])
c = [[0] * n for _ in range(n)]
for i in range(n):
    for j in range(n):
        for k in range(n):
            c[i][j] = c[i][j] + a[i][k] * b[k][j]

print("Matriks AXB")
for i in range(n):
    print(*c[i])