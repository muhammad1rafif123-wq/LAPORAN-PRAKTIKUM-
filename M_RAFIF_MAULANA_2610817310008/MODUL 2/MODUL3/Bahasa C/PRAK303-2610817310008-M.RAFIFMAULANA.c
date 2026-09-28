#include <stdio.h>

int main() {
    int n;

    printf("Masukkan bilangan : ");
    scanf("%d", &n);

    if (n > 0)
        printf("positif\n");
    else if (n < 0)
        printf("negatif\n");
    else
        printf("nol\n");

    return 0;
}