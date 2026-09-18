side_A = 4
side_B = 5
side_C = 7
cost_of_land_per_square_meter = 85000

print("Diketahui: ")
print("Panjang sisi segitiga berturut-turut adalah %d %d, dan %d" %(side_A, side_B, side_C))
print("Keliling tanah Pak Dengklek adalah %d" %(side_A + side_B + side_C))
print("Harga tanah per meter adalah %d" %cost_of_land_per_square_meter)
print("Jawaban: ")
print("Biaya yang diperlukan Pak Dengklek adalah : Rp %d" %((side_A + side_B + side_C) * cost_of_land_per_square_meter))