#include <stdio.h>
#include <math.h>

int main () {
    double a, b;
    printf("Masukkan A : ");
    scanf("%lf", &a);
    printf("Masukkan B : ");
    scanf("%lf", &b);

    double base = sqrt(b*b - a*a);
    double height = a;
    double perimeter = a * base * b;
    double area = 0.5 * base * height;

    printf("Alas = %.2f cm\n", base);
    printf("Tinggi = %.2f cm\n", height);
    printf("Keliling = %.2f cm\n", perimeter);
    printf("Luas = %.2f cm^2\n", area);
    return 0;
}