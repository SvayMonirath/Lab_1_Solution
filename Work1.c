// 1. Write a program to display the following:
// a. HELLO WORLD!
// ---------------------
// b. N N
// NN N
// N NN
// N N
// c. *
// * *
// * *
// * * * * * * *
// d. ********************************************
// * Cambodia Academy of Digital Technology *
// ********************************************
// e. ==========================
// / Institute of Digital Technology /
// ==========================

#include<stdio.h>
int main(void) {
    //print a
    printf("a. HELLO WORLD!\n");
    printf("---------------------\n");

    //print b(using for loop)
    for(int row=0; row<4; row++) {

        for(int columns =0; columns<4;columns++) {
            //there 2 things u need to print " " and "N"

            if(columns==0||columns==3) {
                printf("N");  // Print 'N' on the first and last columns
            } else if(columns == row) { //print 'N' on the diagnol line 
                printf("N");
            }  else{
                printf(" ");    //print space
            }
        }
        printf("\n");
    }
     printf("---------------------\n");

    //print c(using for loop)
    int ROW = 4; // Number of rows(even)
    int COL = 7; // Number of columns(odd)

    for (int row = 0; row < ROW; row++) { 
        for (int col = 0; col < COL; col++) {
            // Print '*' for first row (middle column), diagonal positions, and last row
            if (row == ROW - 1 || col == (COL / 2 - row) || col == (COL / 2 + row) ) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line
    }
    printf("---------------------\n");

    //print d(using for loop)
    int totalWidth = 40;
    // Print top border
    for (int i = 0; i < totalWidth; i++) {
        printf("*");
    }
    printf("\n");

    // Print the message surrounded by '*' with correct spaces
    printf("*Cambodia Academy of Digital Technology*\n");

    // Print bottom border
    for (int i = 0; i < totalWidth; i++) {
        printf("*");
    }
    printf("\n");
    printf("---------------------\n");

    //print e(using for loop)
     totalWidth = 35;
    // Print top border
    for (int i = 0; i < totalWidth; i++) {
        printf("=");
    }
    printf("\n");

    // Print the message surrounded by '*' with correct spaces
    printf("/ Institute of Digital Technology /\n");

    // Print bottom border
    for (int i = 0; i < totalWidth; i++) {
        printf("=");
    }
    printf("\n");
    
    return 0;
    
}