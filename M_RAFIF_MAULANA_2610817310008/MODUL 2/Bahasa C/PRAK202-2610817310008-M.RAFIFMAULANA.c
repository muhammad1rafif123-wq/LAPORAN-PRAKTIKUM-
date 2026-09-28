#include <stdio.h>

int main () {
    double no1, no2; 
    printf("Masukkan Nilai Pertama : ");
    scanf("%lf", &no1);
    printf("Masukkan nilai Kedua   : ");
    scanf("%lf", &no2);

    double hasil = no1 + no2;
    printf("Hasil dari pemjumlahan nilai pertama\"%.2f\" dan nilai kedua \"%.2f\" adalah \"%.2f\"\n", no1, no2, hasil);
    return 0;
}