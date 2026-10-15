#include <stdio.h>

int hanoi_steps(int n) {
    if (n == 0) {
        return 0;
    }
    return 2 * hanoi_steps(n - 1) + 1;
}

int main(void) {
    int n;

    printf("cakram : ");
    scanf("%d", &n);

    printf("Jumlah langkah minimum untuk %d cakram adalah %d\n", n, hanoi_steps(n));

    return 0;
}