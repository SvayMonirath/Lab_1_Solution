// 5. Write a program to convert hour(h:mn:s) to second
// Ex.:
// Enter hour: 5
// Enter minute: 45
// Enter second: 50
// It is 20750 seconds

#include<stdio.h>
int main(void) {
    //declare variable 
    int hour, minute, second;
    
    //prompt user for time, time cannot < 0 (trov ka condition)
    do {
        printf("Enter hour: ");
        scanf("%d", &hour);
    }   while(hour <= 0 );
    
     do {
        printf("Enter minute: ");
        scanf("%d", &minute);
    }   while(minute <= 0 && minute>= 60);

    do {
        printf("Enter second: ");
        scanf("%d", &second);
    }   while(second <= 0 && second>= 60);

    second += hour*3600 + minute*60; //formula 
        
    printf("It is %d seconds\n", second);

    return 0;
}