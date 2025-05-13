#include <stdio.h>

#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"

int main() {
    int a, b, choice;
    float result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nChoose an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = add(a, b);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = subtract(a, b);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = multiply(a, b);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            result = divide(a, b);
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
