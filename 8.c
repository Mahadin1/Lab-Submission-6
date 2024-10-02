#include <stdio.h>

int main() {
    int marks; 
    int passed = 0, failed = 0;
    int excellent = 0, above_average = 0;
    int i;

    printf("Enter the marks of 25 students (out of 100):\n");
    for (i = 0; i < 25; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks);

        if (marks < 0) {
            printf("Error: Enter marks as positive integers.\n");
            i--; 
            continue;
        }
        if (marks > 100) {
            printf("ERROR: Enter marks within 0 to 100.\n");
            i--; 
            continue;
        }


        if (marks >= 90) {
            printf("Grade: A+ (Outstanding)\n");
            excellent++;
        } else if (marks >= 86) {
            printf("Grade: A (Excellent)\n");
            excellent++;
        } else if (marks >= 75) {
            printf("Grade: B+ (Good)\n");
            above_average++;
        } else if (marks >= 70) {
            printf("Grade: B- (Average)\n");
        } else if (marks >= 66) {
            printf("Grade: C+ (Below Average)\n");
        } else if (marks >= 62) {
            printf("Grade: C (Adequate)\n");
        } else if (marks >= 58) {
            printf("Grade: C- (Pass)\n");
        } else if (marks >= 54) {
            printf("Grade: D+ (Pass)\n");
        } else if (marks >= 50) {
            printf("Grade: D (Pass)\n");
            passed++;
        } else {
            printf("Grade: F (Failed)\n");
            failed++;
        }
        if (marks >= 50) {
            passed++;
        }
    }
    printf("\nResults:\n");
    printf("Total passed students: %d\n", passed);
    printf("Total failed students: %d\n", failed);
    printf("Total excellent students (A+): %d\n", excellent);
    printf("Total students above average (B+ and above): %d\n", above_average);

    return 0;
}

