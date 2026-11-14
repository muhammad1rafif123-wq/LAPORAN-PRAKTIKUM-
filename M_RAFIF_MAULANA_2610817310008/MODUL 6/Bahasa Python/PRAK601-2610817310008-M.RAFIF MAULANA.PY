size = input().split()
row = int(size[0])
col = int(size[1])

values = input().split()
m = [[0] * col for _ in range(row)]
k = 0
for i in range(row):
    for j in range(col):
        m[i][j] = int(values[k])
        k += 1
for i in range(row):
    print(*m[i])
