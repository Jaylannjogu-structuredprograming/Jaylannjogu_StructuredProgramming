#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, choice;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n--- Simple Calculator ---\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Result: %d\n", num1 + num2);
    } else if (choice == 2) {
        printf("Result: %d\n", num1 - num2);
    } else if (choice == 3) {
        printf("Result: %d\n", num1 * num2);
    } else if (choice == 4) {
        if (num2 == 0) {
            printf("Error: cannot divide by 0.\n");
        } else {
            float result = (float)num1 / num2;
            printf("Result: %.2f\n", result);
        }
    } else if (choice == 5) {
        if (num2 == 0) {
            printf("Error: modulus by 0 is not allowed.\n");
        } else {
            printf("Result: %d\n", num1 % num2);
        }
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}
