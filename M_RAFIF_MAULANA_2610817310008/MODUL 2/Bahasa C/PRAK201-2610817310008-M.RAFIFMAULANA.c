#include <stdio.h>
int main () {
    char name[100], nim [50], clas[100], TTL[100], address[150], hobby[100], hp[30];
    
    printf("Nama                   : ");
    scanf(" %[^\n]", name);
    printf("NIM                    : ");
    scanf(" %[^\n]", nim);
    printf("Kelas Paralel          : ");
    scanf(" %[^\n]", clas);
    printf("Tempat/Tanggal Lahir   : ");
    scanf(" %[^\n]", TTL);
    printf("Alamat                 : ");
    scanf(" %[^\n]", address);
    printf("Hobby                  : ");
    scanf(" %[^\n]", hobby);
    printf("No. HP                 : ");
    scanf(" %[^\n]", hp);

    printf("\nNama                   : %s\n", name);
    printf("NIM                    : %s\n",  nim);
    printf("Kelas Paralel          : %s\n", clas);
    printf("Tempat/Tanggal Lahir   : %s\n", TTL);
    printf("Alamat                 : %s\n", address);
    printf("Hobby                  : %s\n", hobby);
    printf("No. HP                 : %s\n", hp);
return 0;
}
