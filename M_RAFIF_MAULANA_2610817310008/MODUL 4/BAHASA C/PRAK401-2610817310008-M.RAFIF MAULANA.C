#include <stdio.h>

int main(void) {
    int multiple;
    char symbol;

    printf("kelipatan : ");
    scanf("%d", &multiple);
    printf("simbol : ");
    scanf(" %c", &symbol);

    for (int i = 1; i <= 50; i++) {
        if (i % multiple == 0) {
            printf("%c ", symbol);
        } else {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}