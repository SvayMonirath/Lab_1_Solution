// 4. Write a program to calculate the average of subjects: mathematics and informatic.
// Ex.:
// Enter the score of mathematics: 15.50
// Enter the coefficient: 4
// Enter the score of informatic: 18.50
// Enter the coefficient: 2
// The total score is: 34
// The total coefficient is: 6
// The average is 17

#include<stdio.h>

int main(void) {
    // declare variables
    float score[2], average;
    int coefficient[2];

    // prompt user for score and coefficient for mathematics
    do {
        printf("Enter the score of mathematics: ");
        scanf("%f", &score[0]);
    } while (score[0] < 0);

    do {
        printf("Enter the coefficient for mathematics: ");
        scanf("%d", &coefficient[0]);
    } while (coefficient[0] < 0);

    // prompt user for score and coefficient for informatics
    do {
        printf("Enter the score of informatic: ");
        scanf("%f", &score[1]);
    } while (score[1] < 0);

    do {
        printf("Enter the coefficient for informatic: ");
        scanf("%d", &coefficient[1]);
    } while (coefficient[1] < 0);

    // calculate total score and total coefficient
    float total_score = (score[0] * coefficient[0]) + (score[1] * coefficient[1]);
    int total_coefficient = coefficient[0] + coefficient[1];

    // calculate the weighted average
    average = total_score / total_coefficient;

    // print output
    printf("The total score is: %.2f\n", total_score);
    printf("The total coefficient is: %d\n", total_coefficient);
    printf("The average is: %.2f\n", average);

    return 0;
}
