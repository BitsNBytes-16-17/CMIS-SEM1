//Find max 

#include <stdio.h>

int max(int num1, int num2);

int main(void){
	//variable declaration
	int num1,num2;

	printf("Input num1 : ");
	scanf("%d",&num1);

	printf("Input num2 : ");
	scanf("%d",&num2);

	//Calling function
	max(num1,num2);
}

//Function to find max num
int max(int num1, int num2){
	if(num1 > num2){
		printf("Maximum num is %d \n",num1);
	}else{
		printf("Maximum num is %d \n",num2);
	}
}
