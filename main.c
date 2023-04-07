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

float squareRoot(float a) {
    return sqrt(a);
}

float power(float a, int m) {
    return pow(a, m);
}

float average() {
    int count = 0;
    double total = 0.0, num;

    printf("Enter numbers to calculate average (type 'q' to quit): \n");
    while (scanf("%lf", &num) == 1) {
        total += num;
        count++;
    }

    return total / count;
}

int main() {
    float a, b, result;
    int choice, m;

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    printf("Enter the operation you want to perform: \n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Square root\n");
    printf("6. Power\n");
    printf("7. Calculate Average\n");
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
            result = squareRoot(a);
            printf("Square root is %.2f", result);
            break;
        case 6:
            printf("Enter the power: ");
            scanf("%d", &m);
            result = power(a, m);
            printf("Result is %.2f", result);
            break;
        case 7:
            result = average();
            printf("Average is %.2f", result);
            break;
        default:
            printf("Invalid choice!");
    }

    return 0;
}

