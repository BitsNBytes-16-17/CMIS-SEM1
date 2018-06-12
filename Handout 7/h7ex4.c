//Check number is prime 

#include <stdio.h>

void checkPrime(int num);

int main(void){
	int num;

	printf("Input number : ");
	scanf("%d",&num);

	//Funtion call
	checkPrime(num);
	
}

void checkPrime(int num){
	int i,c = 0;

	for (i = 1; i <= num; i++) {
		if (num % i == 0) {
        	 	c++;
      		}
  	}

  	if (c == 2) {
  		printf("%d is a Prime number\n",num);
  	}else {
  		printf("%d is not a Prime number\n",num);
  	}
}
