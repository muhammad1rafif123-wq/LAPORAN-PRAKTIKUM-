#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(void) {
    int n;

    printf("bilangan : ");
    scanf("%d", &n);

    printf("%d! = %d\n", n, factorial(n));

    return 0;
}