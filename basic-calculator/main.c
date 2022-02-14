#include <stdio.h>
#include <stdlib.h>

int main()
{
    // prompt for 2 numbers
    double first_number;
    double second_number;

    printf("Please enter the first number: ");
    scanf("%lf", &first_number);

    printf("Please enter the second number: ");
    scanf("%lf", &second_number);

    // calculate sum
    double result = first_number + second_number;

    // print sum
    printf("The sum of %.2f and %.2f is: %.2f.\n", first_number, second_number, result);

    return 0;
}