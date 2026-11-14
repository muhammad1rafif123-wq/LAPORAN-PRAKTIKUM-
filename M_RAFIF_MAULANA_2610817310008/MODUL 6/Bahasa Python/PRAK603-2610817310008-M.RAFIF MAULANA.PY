counts = input().split()
n1 = int(counts[0])
n2 = int(counts[1])

if n1 != n2:
    print("Jumlah tidak sama")
else:
    values1 = input().split()
    values2 = input().split()
    result = [0] * n1
    for i in range(n1):
        result[i] = int(values1[i]) * int(values2[i])
    print(*result)