#include <stdio.h>

int main(){
    int number_of_troops = 958730;
    int number_of_heroes = 5;
    int enemy_division = number_of_troops / number_of_heroes;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d \n", number_of_troops);
    printf("Jumlah pahlawan = %d \n", number_of_heroes);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan \n", enemy_division);
    return 0;
}