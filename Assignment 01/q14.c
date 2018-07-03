#include <stdio.h>

int main() {
    
    //variable declaration
    int array[] = {7, 8, 9, 3, 5, 10};
    int i,num, index = 0;

    printf("Input number : ");
    scanf("%d", &num);

    for (i = 0;i < 6;i++){
        if (array[i] == num){
            index = i;
        }
    }

    printf("Number is present \n Position : %d \n", index);

    return 0;
}
