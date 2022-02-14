#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int NUM = 5;
    printf("Num: %d\n", NUM);

    // this won't work!
    // NUM = 8;
    printf("Num: %d\n", NUM);
    return 0;
}