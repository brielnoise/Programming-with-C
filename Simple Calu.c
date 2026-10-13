//GABRIEL L. ARBUIS
// 𝐛𝐬𝐢𝐭 𝟏-𝟏
#include <stdio.h>

int main() {
    float num1, num2, result;
    char operation;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if (operation == '+') {
        result = num1 + num2;
        printf("Result: %.2f", result);
    }
    else if (operation == '-') {
        result = num1 - num2;
        printf("Result: %.2f", result);
    }
    else if (operation == '*') {
        result = num1 * num2;
        printf("Result: %.2f", result);
    }
    else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2f", result);
        }
        else {
            printf("Cannot divide by zero.");
        }
    }
    else {
        printf("Invalid operator.");
    }

    return 0;
}
