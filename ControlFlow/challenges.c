#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**
     * === Even or Odd ==
     *
     * Goals:
     * - prompt user to enter a positive integer number
     * - if number is negative print a warning and exit
     * - check if number is even or odd and store the result
     * - in a boolean variable using the ternary operator
     * - print whether the number is evenr or odd
     */

    int number_user_input = 0;

    printf("Enter a positive integer number: ");
    scanf("%d", &number_user_input);

    if (number_user_input <= 1)
    {
        printf("Please enter a correct value! (n > 1)\n");
    }

    else
    {
        bool even = number_user_input % 2 == 0 ? 1 : 0;

        if (even)
        {
            printf("The number %d is even!\n", number_user_input);
        }

        else
        {
            printf("The number %d is odd!\n", number_user_input);
        }
    }
    return EXIT_SUCCESS;
}
