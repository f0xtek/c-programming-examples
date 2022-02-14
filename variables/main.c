#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[] = "Luke";  // a collection of characters
    unsigned int age = 33; // unsigned int is >=0
    printf("There once was a man named %s\n", name);
    printf("he was %d years old.\n", age);
    printf("He really liked the name %s,\n", name);
    printf("but he did not like being %d.\n", age);

    return 0;
}