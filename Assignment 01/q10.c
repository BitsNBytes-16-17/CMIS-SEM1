#include <stdio.h>

int main(){
    double tem, farCel;

    printf("Input temperature : ");
    scanf("%lf", &tem);

    farCel = 5.0 / 9.0 * (tem - 32);

    printf("Celsius : %lf \n", farCel);

    return 0;
}
