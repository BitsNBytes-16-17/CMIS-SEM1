#include <stdio.h>

int main(){

    //variable declaration
    int age;
    char name[10]; //char array for get String values

    do{
       printf("Input age : ");//prompt
       scanf("%d", &age);//get value for age

       printf("Input name : ");
       scanf("%s", name);

       if (18 < age){ //if for check age is greater than 18
           printf("Eligible for vote \n");
       } else{
           printf("Not eligible for vote \n");
       }

    }while (age <= 0); 

    return 0;
}
