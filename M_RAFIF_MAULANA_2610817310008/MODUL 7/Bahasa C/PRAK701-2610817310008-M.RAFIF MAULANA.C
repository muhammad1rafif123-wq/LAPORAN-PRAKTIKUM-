#include <stdio.h>
#include <string.h>

int main(void) {
    char first[50], last[50], full[101];
    printf("Nama Depan : ");
    fgets(first, 50, stdin);
    first[strcspn(first, "\n")] = '\0';
    printf("Nama Belakang : ");
    fgets(last, 50, stdin);
    last[strcspn(last, "\n")] = '\0';

    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);

    int count = 0;
    for (int i = 0; full[i] != '\0'; i++) {
        if (full[i] != ' ') {
            count++;
        }
    }

    printf("Nama Lengkap : %s\n", full);
    printf("Panjang Nama (tanpa spasi) : %d\n", count);

    return 0;
}