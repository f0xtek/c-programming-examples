#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("%f\n", 8.9);
    printf("%f\n", 5.0 + 4.5);
    printf("%f\n", 5.0 - 4.5);
    printf("%f\n", 5.0 * 4.5);
    printf("%f\n", 5.0 / 4.5);
    printf("%f\n", 5 + 4.5); // always returns a float if one of the operands is a double or float!
    printf("%d\n", 5 / 4);   // always returns an int if both operands are ints. The deminal part is discarded.

    int num = 5 + 4;
    printf("%d\n", num);

    printf("%f\n", pow(2, 3)); // 2 cubed, pow returns a double
    printf("%f\n", sqrt(64));

    printf("%f\n", ceil(36.7));  // 37.000000
    printf("%f\n", ceil(36.3));  // 37.000000
    printf("%f\n", floor(36.7)); // 36.000000
    printf("%f\n", floor(36.3)); // 36.000000

    printf("%d\n", abs(-12)); // 12 - abs = distance from zero

    return 0;
}