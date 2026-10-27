#include <stdio.h>

void Biodata(int tahunLahir, char nama[], char asal[]) {
    int tahun_ini = 2020;
    int umur = tahun_ini - tahunLahir;
    printf("Perkenalkan Nama Saya : %s\n", nama);
    printf("Umur Saya : %d\n", umur);
    printf("Saya Adalah Angkatan : %d\n", tahun_ini);
    printf("Asal Saya dari : %s\n", asal);
}

int main(void) {
    int tahunLahir;
    char nama[20], asal[15];
    scanf(" %d", &tahunLahir);
    scanf(" %[^\n]%*c", nama);
    scanf(" %[^\n]%*c", asal);
    Biodata(tahunLahir, nama, asal);
    return 0;
}