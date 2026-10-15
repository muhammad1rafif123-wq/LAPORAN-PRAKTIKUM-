#include <stdio.h>

int sum_of_digits(int n) {
    if (n < 10) {
        return n;
    }
    return (n % 10) + sum_of_digits(n / 10);
}

int main(void) {
    int n;

    printf("bilangan : ");
    scanf("%d", &n);

    printf("Jumlah digit dari %d adalah %d\n", n, sum_of_digits(n));

    return 0;
}