#include <stdio.h>

int main(void){
	int i;
	char letters[5] = {'A', 'B', 'C', 'D', 'E'};

	printf("%c\n", letters[0]);// Prints A
	
	printf("%c\n", letters[4]);	//To print last element

	letters[2] = 'W'; //Replace 3rd  element with the letter W

	printf("Input charatcter : ");
	scanf(" %c", &letters[3]); //To replace 4th element with input through keyboard


	char array[] = {'a','b','c'};

	for(i = 0;i < 3;i++){
		printf("Input number : ");
		scanf("%d", &array[i]);
	}

	return 0;

}
