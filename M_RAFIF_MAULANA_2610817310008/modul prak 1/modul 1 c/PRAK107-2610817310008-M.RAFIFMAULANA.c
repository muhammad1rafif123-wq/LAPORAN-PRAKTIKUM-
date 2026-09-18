#include <stdio.h>

int main(){
int side_A = 4;
int side_B = 5;
int side_C = 7;
int cost_of_land_per_square_meter = 85000;

printf("Diketahui: \n");
printf("Panjang sisi segitiga berturut-turut adalah %d %d, dan %d \n", side_A, side_B, side_C);
printf("Keliling tanah Pak Dengklek adalah %d \n", (side_A + side_B + side_C));
printf("Harga tanah per meter adalah %d \n", cost_of_land_per_square_meter);
printf("Jawaban: \n");
printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", ((side_A + side_B + side_C) * cost_of_land_per_square_meter));
return 0;
}