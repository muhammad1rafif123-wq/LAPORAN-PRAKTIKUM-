def hitung(nilai1, nilai2):
    return nilai1 - nilai2
def mutlak(angka):
    if angka < 0:
        return -angka
    return angka

data = input().split()
x1 = int(data[0])
y1 = int(data[1])
x2 = int(data[2])
y2 = int(data[3])
jarak = mutlak(hitung(x1, x2)) + mutlak(hitung(y1, y2))
print(jarak)