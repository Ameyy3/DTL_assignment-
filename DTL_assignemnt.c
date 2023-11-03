#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, ^, h): ");
    scanf(" %c", &operator);

    if (operator != 'h') {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
    }

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '^':
            result = pow(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case 'h':
            int decimalNumber;
            printf("Enter a decimal number: ");
            scanf("%d", &decimalNumber);
            printf("Hexadecimal: 0x%X\n", decimalNumber);
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}

