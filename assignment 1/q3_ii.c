#include <stdio.h>

int main(){
    int a = 1, b = 2, c = 3;

    printf("%d %d %d \n",a++, ++b, c+=2); //prints 1 3 5
    printf("%d %d %d \n",a++, b, c-=1); //prints 2 3 4
    printf("%d %d %d \n",a/=2, b*=3, c%=2); //prints 1 9 0
    printf("%d %d %d \n",a, b, ++c); //prints  1 9 1

    return 0;
}
