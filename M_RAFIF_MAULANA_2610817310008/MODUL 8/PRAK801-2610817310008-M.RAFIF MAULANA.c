#include <stdio.h>

int main(void) {
    int number;
    scanf("%d", &number);

    int *p = &number;
    printf("Nilai variabel = %d\n", number);
    printf("Alamat variabel = %p\n", (void *)&number);
    printf("Nilai melalui pointer = %d\n", *p);

    *p = *p * 2;
    printf("Nilai setelah diubah lewat pointer = %d\n", number);
    return 0;
}