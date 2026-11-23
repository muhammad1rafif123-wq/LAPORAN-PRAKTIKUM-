#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void) {
    int seat_a, seat_b;
    scanf("%d %d", &seat_a, &seat_b);
    printf("Sebelum ditukar: Andi = %d, Budi = %d\n", seat_a, seat_b);

    swap(&seat_a, &seat_b);
    printf("Sesudah ditukar: Andi = %d, Budi = %d\n", seat_a, seat_b);
    return 0;
}