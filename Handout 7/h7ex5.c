#include <stdio.h>

int firstDigit(int num);
int lastDigit(int num);

int main(void){
	int num;

	printf("Input number : ");
	scanf("%d", &num);

	printf("The first digit of %d is %d and last digit is %d\n",num, firstDigit(num), lastDigit(num));
}

int firstDigit(int num){
	while(num >= 10){
		num/=10;
	}
	return num;
}

int lastDigit(int num){
	return num % 10;
}
