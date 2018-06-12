#include <stdio.h>

//function declarations
void oddNumbers(int numbers[], int size);

void evenNumbers(int numbers[], int size);

void highAndLow(int numbers[], int size);

int main() {
    //variable declaration
    int size, i,type;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int numbers[size];

    printf("Enter %d numbers \n",size);

    for(i = 0;i < size;i++){
        printf("Enter num %d : ",i+1);
        scanf("%d",&numbers[i]);
    }

    printf("MENU\n");
    printf("1. Determine the odd numbers entered\n");
    printf("2. Determine the even numbers entered\n");
    printf("3. Determine the highest and lowest numbers entered\n");
    printf("Your selection : ");
    scanf("%d",&type);

    switch (type){
        case 1: oddNumbers(numbers,size);
            break;
        case 2: evenNumbers(numbers,size);
            break;
        case 3: highAndLow(numbers, size);
            break;
        default:
            printf("Invalid Selection\n");
    }
}

void oddNumbers(int numbers[], int size){
    int i;

    printf("Odd Numbers : ");

    for(i = 0;i < size;i++){
        if (numbers[i] % 2 != 0){
            printf("%d ",numbers[i]);
        }
    }
    printf("\n");
}

void evenNumbers(int numbers[], int size){
    int i;

    printf("Even Numbers : ");

    for(i = 0;i < size;i++){
        if (numbers[i] % 2 == 0){
            printf("%d ",numbers[i]);
        }
    }
    printf("\n");
}

void highAndLow(int numbers[], int size){
    int high = 0, low = 0, i;

    for (i = 0; i < size; ++i) {
        if (numbers[i] > high){
            high = numbers[i];
        }

        if (numbers[i] < low){
            low = numbers[i];
        }
    }

    printf("Highest number : %d\n",high);
    printf("Lowest number : %d\n",low);
}
