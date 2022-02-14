#include <stdio.h>
#include <stdlib.h>

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}

int main()
{
    double num1;
    double num2;
    char op;
    printf("Please enter first number: ");
    scanf("%lf", &num1);
    printf("Please enter operation (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Please enter second number: ");
    scanf("%lf", &num2);

    if (op == '+')
    {
        printf("%.2f\n", add(num1, num2));
    }
    else if (op == '-')
    {
        printf("%.2f\n", subtract(num1, num2));
    }
    else if (op == '*')
    {
        printf("%.2f\n", multiply(num1, num2));
    }
    else if (op == '/')
    {
        printf("%.2f\n", divide(num1, num2));
    }
    else
    {
        printf("Error: operator must be one of +, -, *, or /\n");
        return 1;
    }

    return 0;
}