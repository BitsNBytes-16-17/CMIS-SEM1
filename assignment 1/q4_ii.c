#include <stdio.h>

int main(){

    float salary, bonus, ans;

    printf("Input salary : ");
    scanf("%f", &salary);

    printf("Input bonus : ");
    scanf("%f", &bonus);

    ans = 2 * (salary + bonus);

    printf("%f\n",ans);

    return 0;
}
