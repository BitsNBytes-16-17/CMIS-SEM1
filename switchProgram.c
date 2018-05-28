#include <stdio.h>
int main(void) {

    //Variable Declaration
    int position, sales;
    float basicSalary, commission, salary;

    printf("Input Position : ");
    scanf("%d", &position);

    printf("Input sales : ");
    scanf("%d", &sales);

    switch (position){
        case 1: basicSalary = 50000;
            if (sales >= 4000){
                commission = (float) (basicSalary * 0.15);
                salary = basicSalary + commission;
            } else if (sales >= 3000){
                commission = (float) (basicSalary * 0.12);
                salary = basicSalary + commission;
            } else{
                commission = 0;
                salary = basicSalary + commission;
            }
            break;
        case 2: basicSalary = 75000;
            if (sales >= 4000){
                commission = (float) (basicSalary * 0.15);
                salary = basicSalary + commission;
            } else if (sales >= 3000){
                commission = (float) (basicSalary * 0.12);
                salary = basicSalary + commission;
            } else{
                commission = 0;
                salary = basicSalary + commission;
            }
            break;
        default: printf("Invalid position !!!!\n");
    }

    printf("Total monthly salary : %.2f \n", salary);

}
