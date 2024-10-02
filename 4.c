#include<stdio.h>

int main() {
	int input,even;
	int sum = 0;
	printf("Find the Sum of even numbers upto given number.\nEnter your number : ");
	scanf("%d",&input);

	if (input == 0) {
		printf("%d sum  upto : 0", input);
	} else {
		for(int i = input; i > 0; i--) {
			even = i%2;
			if(even == 0) {
				sum = i +  sum;
			}

		}
		printf("sum of upto %d is equal to : %d", input,sum);
	}


	return 0;
}
