#include<stdio.h>

int main() {
	int input;
	int factorial = 1;
	printf("Find the factorial of entered number.\nEnter your number : ");
	scanf("%d",&input);

	if (input == 0) {
		printf("%d! is equal to : 1", input);
	} else {
		for(int i = input; i >= 1; i--) {
			factorial = i *  factorial;

		}
		printf("%d! is equal to : %d", input,factorial);
	}

	return 0 ;
}
