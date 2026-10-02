number = int(input())

if number > 99:
    print("Anda Menginput Melebihi Limit Bilangan")
elif number == 0:
    print("Nol")
elif number < 10:
    print("Satuan")
elif number < 20:
    print("Belasan")
else:
    print("Puluhan")
