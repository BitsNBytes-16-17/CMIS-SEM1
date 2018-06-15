#include <stdio.h>

int main(){

    int num1, num2;
    float ans;

    printf("Input num1 : ");
    scanf("%d", &num1);

    printf("Input num2 : ");
    scanf("%d", &num2);

    ans = (float) ((num1 * num2) / 3.0);

    printf("%.3f\n", ans);
    
    return 0;
}
