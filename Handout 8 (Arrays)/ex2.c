#include <stdio.h>

int main(){
	
	int i;
	int numbers[3];

	for(i = 0;i < 3; i++){
		printf("Input number : ");
		scanf("%d", &numbers[i]);

		if(numbers[i] % 2 == 0){
			printf("%d is even \n",numbers[i]);
		}else{
			printf("%d is odd \n",numbers[i]);
		}
	}

	
	return 0;
}
