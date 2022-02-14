#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 44;
    double pi = 3.14; // use double most commonly
    float half_of_5 = 2.5;

    char grade = 'A';     // stores the decimal ASCII number for 'A' =- 65. Single quotes only.
    char name[] = "Luke"; // collection of chars (Array). Double quotes only.

    printf("Age: %d\n", age);
    printf("Pi: %f\n", pi);                 // default 5 decimal places
    printf("Half of 5: %.1f\n", half_of_5); // round to 1 decimal place with %.1f
    printf("Grade: %c\n", grade);
    printf("Name: \"%s\"\n", name); // escaped double quotes

    return 0;
}