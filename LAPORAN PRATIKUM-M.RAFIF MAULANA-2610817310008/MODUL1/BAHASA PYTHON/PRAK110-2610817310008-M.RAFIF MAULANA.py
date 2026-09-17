alas = 5
tinggi = 12
sisi_miring = ((alas * alas) + (tinggi * tinggi)) ** 0.5

print(“Diketahui:”)
print(“Alas = %.0f cm” %alas)
print(“Tinggi = %.0f cm” %tinggi)
print(“\nJawab:”)
print("Sisi A = %.0f cm" %tinggi)
print("Sisi B = %.0f cm" %sisi_miring)
print("Sisi C = %.0f cm" %alas)
print("Keliling = %.0f cm" %(alas + tinggi + sisi_miring))