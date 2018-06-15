#include <stdio.h>

int main(){
    int a = 2, b = 3, c = (++a,a+b);
    // c value will be 6 because a incremented by 1 then a + b = 6

    printf("%d %d %d \n",a++, ++b, c+=2); //prints 3 4 8
    printf("%d %d %d \n",a++, b, c-=1); //prints 4 4 7
    printf("%d %d %d \n",a/=2, b*=3, c%=2); //prints 2 12 1
    printf("%d %d %d \n",a, b, ++c); //prints 2 12 2

    return 0;
}
