#include <stdio.h>

int main(){

    int a, t, v;
    float ans;

    printf("Input a : ");
    scanf("%d", &a);

    printf("Input t : ");
    scanf("%d", &t);

    printf("Input v : ");
    scanf("%d", &v);

    ans = (float)(a - 7) / (t + (9 * v));

    printf("%f\n",ans);

    return 0;
}
