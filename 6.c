#include <stdio.h>

int main() {
    int a, b, lcm;
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
  
    lcm = (a > b) ? a : b;

    while (1) {
        if ((lcm % a == 0) && (lcm % b == 0)) {
            break; 
        }
        lcm++; 
    }
    printf("LCM = %d\n", lcm);
    return 0;
}
