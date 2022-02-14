#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Please enter you age: ");
    scanf("%d", &age);
    printf("You are %d years old!\n", age);

    double pi;
    printf("Please enter Pi to 2 decimal places: ");
    scanf("%lf", &pi); // when getting a float/double from user input, use %lf instead of %f
    printf("You said Pi is %.2f\n", pi);

    char name[20]; // need to specify the number of characters!
    printf("What is your name? ");

    /*
        HERE BE DRAGONS!

        scanf only gets input up until the frst whitespace character!

        Also, if you input more data than the variable is allowed to hold,
        this can lead to Buffer Overflow attacks!!
    */
    scanf("%s", name); // don't need the ampersand, &!
    printf("Hello %s!\n", name);

    /*
        Important to flush stdin, otherwise the remaining characters after
        the whitespace will flow into the next bit of code!
    */
    fflush(stdin);

    /*
        fgets gets the entire line
    */
    char full_name[20];
    printf("Enter your full name: ");
    fgets(full_name, 20, stdin); // only accept 20 characters from standard input
    printf("Your full name is %s\n", full_name);

    return 0;
}