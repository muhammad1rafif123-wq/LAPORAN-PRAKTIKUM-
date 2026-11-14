#include <stdio.h>

int main(void) {
    int n;
    int a[1000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d", a[i] * (i + 1));
        if (i < n - 1) {
        printf(" ");
        }
    }
    printf("\n");
    return 0;
}