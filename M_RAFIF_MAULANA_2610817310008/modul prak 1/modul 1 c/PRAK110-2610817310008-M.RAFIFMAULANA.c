#include <stdio.h>
#include <math.h>

int main(){
    float base = 5;
    float heigh = 12;
    double side = pow(((base * base) + (heigh * heigh)), 0.5);

    printf("Diketahui:\n");
    printf("Alas = %.0f cm\n", base);
    printf("Tinggi = %.0f cm\n", heigh);
    printf("\nJawab:\n");
    printf("Sisi A = %.0f cm \n", heigh);
    printf("Sisi B = %.0f cm \n", side);
    printf("Sisi C = %.0f cm \n", base);
    printf("Keliling = %.0f cm \n", base + heigh + side);
    printf("Luas = %.0f cm \n", (0.5 * base * heigh));
    return 0; 
}