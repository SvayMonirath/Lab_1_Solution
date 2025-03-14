#include <stdio.h>

int main(void) {
    // Declare variables
    char product1[30], product2[30];
    int amount1, amount2;
    float price1, price2;
    float total;

    // Ask for product 1 details
    printf("Enter the name of the first product: ");
    scanf("%s", product1);
    printf("Enter the price per unit of %s ($): ", product1);
    scanf("%f", &price1);
    printf("Enter the amount of %s: ", product1);
    scanf("%d", &amount1);

    // Ask for product 2 details
    printf("\nEnter the name of the second product: ");
    scanf("%s", product2);
    printf("Enter the price per unit of %s ($): ", product2);
    scanf("%f", &price2);
    printf("Enter the amount of %s: ", product2);
    scanf("%d", &amount2);

    // Calculate the total price
    total = (price1 * amount1) + (price2 * amount2);

    // Display the results
    printf("\nNo\tProduct\t\tPrice per unit ($)\tAmount\tPrice ($)\n");
    printf("1\t%s\t\t%.2f\t\t\t%d\t%.2f\n", product1, price1, amount1, price1 * amount1);
    printf("2\t%s\t\t%.2f\t\t\t%d\t%.2f\n", product2, price2, amount2, price2 * amount2);
    printf("\nTotal: %.2f\n", total);

    return 0;
}
