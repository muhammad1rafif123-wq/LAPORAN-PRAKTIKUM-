#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2) {
    return nilai1 - nilai2;
}
int mutlak(int angka) {
    if (angka < 0) {
        return -angka;
    }
    return angka;
}
int main(void) {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    int jarak = mutlak(hitung(x1, x2)) + mutlak(hitung(y1, y2));
    printf("%d", jarak);
    return 0;
}