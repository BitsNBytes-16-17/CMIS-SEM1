//Write function to swap 2 numbers using temp variable

#include <stdio.h>

void swap(int a,int b);

int main(void){
	int a,b;

	printf("Input a :");
	scanf("%d",&a);

	printf("Input b :");
	scanf("%d",&b);

	//swap function call
	swap(a,b);
}

void swap(int a,int b){
	int temp;

	temp = a; //assign a value to teamp
	a = b; //assign b value to a
	b = temp; //assign temp value to b

	printf("a : %d \n",a);
	printf("b : %d \n",b);
}
