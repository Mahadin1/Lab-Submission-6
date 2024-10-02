#include <stdio.h>

int main() {
    int score = 0;   
    int wrongAnswers = 0;  
    int answer;        

    printf("Welcome to the University Entry Test!\n");

    for (int i = 1; i <= 10; i++) {
        printf("\nQuestion %d:\n1. Option A\n 2. Option B\n 3. Option C\n 4. Option D\n", i);
        printf("Enter your answer (1-4): ");
        scanf("%d", &answer);

        if (answer < 1 || answer > 4) {
            printf("Invalid option, please enter a number between 1 and 4.\n");
            i--;
            continue;
        }
        if (answer == 1) {
            score += 4;
            printf("Correct answer! You now have %d marks.\n", score);
        } else { 
            score -= 1;
            wrongAnswers++;
            printf("Wrong answer! You now have %d marks.\n", score);


            if (wrongAnswers >= 4) {
                printf("Sorry, you did not qualify for the admission.\n");
                return 0; 
            }
        }


        if (score >= 20) {
            printf("Congratulations, you have qualified for the admission!\n");
            return 0;
        }
    }

    printf("\nThe test has concluded. Your final score is %d.\n", score);
    return 0;
}
