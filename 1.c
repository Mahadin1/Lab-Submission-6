#include<stdio.h>

int main() {
	int input,mainint;
	int sum = 0;
	printf("Find the Sum of numbers.");
	mainint = input;


    
	do {
		input--;
		printf("\nEnter number to sum(O to exit) : ");
		scanf("%d",&input);
		sum = input + sum;
		if(input == 0){
			printf("You have enter 0, Code is exited");
		}else{
		printf("sum upto entered numbers is : %d\n",sum);
		}

	} while(input != 0);

	return 0;

}
