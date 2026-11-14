#include <stdio.h>

int main(void) {
    int n1, n2;
    int row1[1000], row2[1000];
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
        return 0;
    }
    for (int i = 0; i < n1; i++) {
        scanf("%d", &row1[i]);
    }
    for (int i = 0; i < n2; i++) {
        scanf("%d", &row2[i]);
    }
    for (int i = 0; i < n1; i++) {
        printf("%d", row1[i] * row2[i]);
        if (i < n1 - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}