#include <stdio.h>

int main(){

    float rate, delta, ans;

    printf("Input rate : ");
    scanf("%f", &rate);

    printf("Input delta : ");
    scanf("%f", &delta);

    ans = (rate * rate) * delta;
    
    printf("%f\n", ans);

    return 0;
}
