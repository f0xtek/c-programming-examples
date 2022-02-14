#include <stdio.h>
#include <stdlib.h>

/*
If calling a function before its implementation,
you need to declare the function signature first!

This is called prototyping.
*/
double add(double a, double b);

/*
Otherwise you can implement the function before calling it
*/
double subtract(double a, double b)
{
    return a - b;
}

/*
void as the return type means the function does not return a value.
*/
void sayHi(char name[])
{
    printf("Hi %s!\n", name);
}

int main()
{
    printf("%.2f\n", add(2.0, 4.0));
    printf("%.2f\n", subtract(4.0, 2.0));

    sayHi("John");

    return 0;
}

/*
Now we implement the add function, after it has been called in main().
This is allowed because we declared the function's prototype further up in the program.
*/
double add(double a, double b)
{
    return a + b;
}
