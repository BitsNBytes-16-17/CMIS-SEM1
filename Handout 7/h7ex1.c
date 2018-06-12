#include <stdio.h>
#include <math.h>

int calSquare(int num);

int main(void){
	int num1,num2;

	printf("Input number 1 : ");
	scanf("%d",&num1);

	printf("Input number 2 : ");
	scanf("%d",&num2);

	printf("%d square : %d \n",num1,calSquare(num1));
	printf("%d square : %d \n",num2,calSquare(num2));

	return 0;
}

int calSquare(int num){
	return pow(num,2);
}
