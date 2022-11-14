#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int a = -1;
    // if (a != 0)
    if (a)
    {
        printf("a != 0\n");
    }

    else
    {
        printf("a == 0\n");
    }

    // if (a == 0)
    if (!a)
    {
        printf("a == 0\n");
    }

    else
    {
        printf("a != 0\n");
    }
    */

    /*
    int a = 1;

    if (!a)
    {
        printf("a == 0\n");
    }
    else if (a < 0)
    {
        printf("a < 0\n");
    }

    else if (a > 0)
    {
        printf("a > 0\n");
    }
    */

    // Ternary Operator example

    int a = 9;
    int b = 3;
    int c = a > b ? a : b;
    printf("c: %d\n", c);

    return EXIT_SUCCESS;
}
