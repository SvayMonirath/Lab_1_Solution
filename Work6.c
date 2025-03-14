// 6. Write a program to convert time in second to format(h:mn:s)
// Ex:
// Enter time in second: 10000
// It is 2h 46mn 40s

#include<stdio.h>

int main(void) {
    // declare variables
    int hour = 0, minute, second;

    // prompt user for seconds with condition 
    do {
        printf("Enter time in second: ");
        scanf("%d", &second);
    } while (second < 0);

    // calculate hours, minutes, and seconds
    hour = second / 3600;          // 1 hour = 3600 seconds
    minute = (second % 3600) / 60; // remaining seconds to minutes
    second = second % 60;          // remaining seconds after converting to minutes

    // print output
    printf("It is %dh %dmn %ds\n", hour, minute, second);

    return 0;
}
