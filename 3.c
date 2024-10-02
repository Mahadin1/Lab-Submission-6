#include<stdio.h>

int main() {
	int input,counteven,countOdd;
	counteven = 0;
	countOdd = 0;
	printf("Enter Number to know the count of Even/Odd number : ");
	scanf("%d",&input);

	for(int i = input; i > 0; i--) {
		input = i % 2;
		if(input == 0) {
			counteven++;
		} else {
			countOdd++;
		}

	}


	printf("Odd count is : %d\nEven count is %d",countOdd,counteven);
	return 0;
}
