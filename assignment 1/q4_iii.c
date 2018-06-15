#include <stdio.h>

int main(){

    float time, mass, ans;

    printf("Input time : ");
    scanf("%f", &time);

    printf("Input mass : ");
    scanf("%f", &mass);

    ans = 1 / (time + 3 * mass);

    printf("%f\n",ans);

    return 0;
}
