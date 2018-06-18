#include <stdio.h>

int main(void){

	int i,max;
	int numbers[5] = {2,5,8,9,0};

	max = numbers[0];
	for(i = 1;i < 5;i++){
		if(max < numbers[i]){
			max = numbers[i];
		}
	}

	printf("Max : %d \n", max);

	return 0;
}
