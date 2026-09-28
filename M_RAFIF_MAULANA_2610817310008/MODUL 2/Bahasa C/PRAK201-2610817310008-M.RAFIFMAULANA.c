#include <stdio.h>
int main () {
    char nama[100], nim [50], kelas[100], TTL[100], alamat[150], hobby[100], hp[30];
    
    printf("Nama : ");
    scanf(" %[^\n]", nama);
    printf("NIM : ");
    scanf(" %[^\n]", nim);
    printf("Kelas Paralel : ");
    scanf(" %[^\n]", kelas);
    printf("Tempat/Tanggal Lahir : ");
    scanf(" %[^\n]", TTL);
    printf("Alamat : ");
    scanf(" %[^\n]", alamat);
    printf("Hobby : ");
    scanf(" %[^\n]", hobby);
    printf("No. HP : ");
    scanf(" %[^\n]", hp);

    printf("\nNama                 : %s\n", nama);
    printf("NIM                  : %s\n",  nim);
    printf("Kelas Paralel        : %s\n", kelas);
    printf("Tempat/Tanggal Lahir : %s\n", TTL);
    printf("Alamat               : %s\n", alamat);
    printf("Hobby                : %s\n", hobby);
    printf("No. HP               : %s\n", hp);
return 0;
}