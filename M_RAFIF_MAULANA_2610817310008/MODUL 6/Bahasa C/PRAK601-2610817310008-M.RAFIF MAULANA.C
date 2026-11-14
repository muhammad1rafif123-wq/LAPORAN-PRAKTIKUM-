#include <stdio.h>

int main(void) {
    int row, col;
    int m[67][67];
    scanf("%d %d", &row, &col);

    for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
    scanf("%d", &m[i][j]);
        }}
    for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
            printf("%d", m[i][j]);
            if (j < col - 1) {
            printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}