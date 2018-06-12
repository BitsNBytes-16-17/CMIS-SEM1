#include <stdio.h>

float add(int num1, int num2);
float sub(int num1, int num2);
float mul(int num1, int num2);
float div(int num1, int num2);

int main(void){
	
	int num1,num2;
	float total;
	char type;
	
	printf("a - Addition \ns - Subtraction \nm - Multiplication \nd - Division \n");

	printf("Enter type : ");
	scanf(" %c",&type);

	printf("Input num 1 : ");
	scanf("%d",&num1);

	printf("Input num 1 : ");
	scanf("%d",&num2);

	switch(type){
		case 'a' : total = add(num1,num2);
			break;
		case 's' : total = sub(num1,num2);
			break;
		case 'm' : total = mul(num1,num2);
			break;
		case 'd' : total = div(num1,num2);
			break;
		default : 
			printf("Invalid type !!\n");
	}	

	printf("Total : %f\n",total);
}

float add(int num1, int num2){
	return num1 + num2;
}

float sub(int num1, int num2){
	return num1 - num2;
}

float mul(int num1, int num2){
	return num1 * num2;
}

float div(int num1, int num2){
	return num1 / num2;
}
