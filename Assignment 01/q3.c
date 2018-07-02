#include <stdio.h>

struct customer{
    int customerId;
    char name[10];
    int units;
}customer1;

int main(){

    double unitCharge = 0, amount, surAmount = 0;

    printf("Input Customer ID : ");
    scanf("%d", &customer1.customerId);

    printf("Input Customer Name : ");
    scanf("%s", customer1.name);

    printf("Input Customer Units : ");
    scanf("%d", &customer1.units);

    if (customer1.units >= 600){
        unitCharge = 2.0;
    } else if (customer1.units >= 400){
        unitCharge = 1.8;
    } else if (customer1.units >= 200){
        unitCharge = 1.5;
    } else if (customer1.units <= 199){
        unitCharge = 1.0;
    }

    amount = unitCharge * customer1.units;

    if (amount > 400){
        surAmount = amount * 0.15;
    }

    printf("Customer ID No : %d \n", customer1.customerId);
    printf("Customer Name : %s \n", customer1.name);
    printf("Unit consumed : %d \n", customer1.units);
    printf("Amount Charges @Rs. %.2lf per unit : %.2lf \n", unitCharge, amount);
    printf("SurCharge Amount : %.2lf \n", surAmount);
    printf("Net Amount Paid by the Customer : %.2lf \n", amount + surAmount);

    return 0;
}
