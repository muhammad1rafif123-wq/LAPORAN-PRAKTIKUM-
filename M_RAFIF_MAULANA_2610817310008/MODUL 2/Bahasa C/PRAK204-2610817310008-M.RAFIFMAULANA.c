#include <stdio.h>

int main () {
    const double PI = 22.0 / 7.0; 
    double r, t;

    printf("Masukkan jari hari : ");
    scanf("%lf", &r);
    printf("Masukkan Tinggi    : ");
    scanf("%lf", &t);

    double volume = PI * r * r * t;
    double area = 2 * PI * r * (r+t);
    double circumference = 2 * PI * r;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", area);
    printf("Keliling = %.2f\n", circumference);
return 0;
}