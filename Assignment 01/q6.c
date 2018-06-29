#include <stdio.h>

int main(){
    int num, count = 0;

    printf("Input number : ");
    scanf("%d", &num);

    while (num != 0){
        num /= 10;
        count++;
    }

    printf("%d digits\n", count);

    return 0;
}
