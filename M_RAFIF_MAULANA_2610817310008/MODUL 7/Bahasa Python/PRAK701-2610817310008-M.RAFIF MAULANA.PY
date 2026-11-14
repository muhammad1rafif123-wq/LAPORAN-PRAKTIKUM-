first = input("Nama Depan : ")
last = input("Nama Belakang : ")
full = first + " " + last
count = 0
for letter in full:
    if letter != " ":
        count += 1

print("Nama Lengkap :", full)
print("Panjang Nama (tanpa spasi) :", count)