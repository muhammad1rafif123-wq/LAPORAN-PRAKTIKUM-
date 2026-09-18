#include <stdio.h>

int main(){
    float lap = 5;
    float distance_covered = 14;
    float perimeter = distance_covered / lap;
    float radius = (perimeter) / (2 * 3.14);

    printf("Diketahui: \n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran \n", lap);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer \n \n", distance_covered);
    printf("Jawaban: \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %0.2f Kilometer \n", radius );
    return 0;
}