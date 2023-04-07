//agraci22
#include <stdio.h>
#include <math.h>

float sum(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

float squareRoot() {
    float a;
    printf("Enter a number: ");
    scanf("%f", &a);
    return sqrt(a);
}

float power() {
    float a, result;
    int m;
    printf("Enter a number: ");
    scanf("%f", &a);
    printf("Enter the power: ");
    scanf("%d", &m);
    result = pow(a, m);
    return result;
}

int main() {
    float a, b, result;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    printf("Enter the operation you want to perform: \n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Square root\n");
    printf("6. Power\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = sum(a, b);
            printf("Sum is %.2f", result);
            break;
        case 2:
            result = subtract(a, b);
            printf("Subtraction is %.2f", result);
            break;
        case 3:
            result = multiply(a, b);
            printf("Multiplication is %.2f", result);
            break;
        case 4:
            result = divide(a, b);
            printf("Division is %.2f", result);
            break;
        case 5:
            result = squareRoot();
            printf("Square root is %.2f", result);
            break;
        case 6:
            result = power();
            printf("Result is %.2f", result);
            break;
        default:
            printf("Invalid choice!");
    }

    return 0;
}
