#include <stdio.h>

int MaxNilai(int a, int b, int c, int d) {
    int maks = a;
    if (b > maks) {
        maks = b;
    }
    if (c > maks) {
        maks = c;
    }
    if (d > maks) {
        maks = d;
    }
    return maks;
}
int main(void) {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxNilai(a, b, c, d);
    printf("%d", hasil);
    return 0;
}