#include <stdio.h>

int getSum(int num1, int num2) {
    return num1 + num2;
}

int getDifference(int num1, int num2) {
    return num1 - num2;
}

int getProduct(int num1, int num2) {
    return num1 * num2;
}

double getQuotient(int num1, int num2) {
    if (num2 == 0) {
        printf("Error: Division by zero! ");
        return 0.0;
    }
    return (double)num1 / num2; 
}

int main() {
    int num1, num2;

    printf("\nEnter your first number: ");
    scanf("%d", &num1);
    printf("Enter your second number: ");
    scanf("%d", &num2);

    printf("---- RESULT----\n");
    printf("Sum: %d\n", getSum(num1, num2));
    printf("Difference: %d\n", getDifference(num1, num2));
    printf("Product: %d\n", getProduct(num1, num2));
    printf("Quotient: %.2f\n", getQuotient(num1, num2));

    return 0;
}
