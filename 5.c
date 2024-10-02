#include <stdio.h>

int main() {
    int input;
    int revnum = 0;

    printf("Enter a number to reverse: ");
    scanf("%d", &input);

    while (input != 0) {
        int digit = input % 10;      
        revnum = (revnum * 10) + digit; 
        input /= 10;
    }

    printf("The reversed number is: %d\n", revnum);
    return 0;
}
