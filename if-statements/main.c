#include <stdio.h>
#include <stdlib.h>

int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int num1 = 10;
    int num2 = 25;
    int num3 = 20;
    printf("The bigger number of %d, %d and %d is %d\n", num1, num2, num3, max(num1, num2, num3));
    return 0;
}