#include <stdio.h>
#include <stdlib.h>

int main()
{
    // need to specify array size!
    int nums[3];

    nums[0] = 0;
    nums[1] = 1;
    nums[2] = 2;
    printf("%d\n", nums[0]);
    printf("%d\n", nums[1]);
    printf("%d\n", nums[2]);

    // assign array items in declaration
    int new_nums[3] = {2, 4, 6};
    printf("%d\n", new_nums[0]);
    printf("%d\n", new_nums[1]);
    printf("%d\n", new_nums[2]);

    // reassign array item
    new_nums[0] = 100;
    printf("%d\n", new_nums[0]);

    // out of bounds produces compiler error!
    // printf("%d\n", new_nums[20]);

    return 0;
}