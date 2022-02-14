#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;

    printf("Please enter a grade: ");
    scanf(" %c", &grade);

    switch (grade)
    {
    case 'A':
        printf("You did very well!\n");
        break;
    case 'B':
        printf("You did okay!\n");
        break;
    case 'C':
        printf("You did poorly!\n");
        break;
    case 'D':
        printf("You did very bad!\n");
        break;
    case 'F':
        printf("You failed!\n");
        break;
    default:
        printf("Invalid grade!\n");
        break;
    }

    return 0;
}