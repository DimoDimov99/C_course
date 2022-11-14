#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

typedef enum
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
} days_of_week;

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

    /*
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
    */

    /**
     * === Days of the week ===
     *
     * Goals:
     * - declare an enum that lists all the days of the weeek
     * - make sure it has the value 1 on Monday
     * - print monday and sunday values
     * - get user input and stores as a day enum
     * - print a string with the name of the day
     */

    /*
    int user_input = 0;
    printf("Enter current day (1 = Monday, 7 = Sunday)\n");
    scanf("%d", &user_input);
    days_of_week current_day = user_input;

    switch (current_day)
    {
    case 1:
        printf("Current day is Monday!\n");
        break;
    case 2:
        printf("Current day is Tuesday!\n");
        break;
    case 3:
        printf("Current day is Wednesday!\n");
        break;
    case 4:
        printf("Current day is Thursday!\n");
        break;
    case 5:
        printf("Current day is Friday!\n");
        break;
    case 6:
        printf("Current day is Saturday!\n");
        break;
    case 7:
        printf("Current day is Sunday!\n");
        break;
    default:
        printf("Unknown values, range[1,7]\n");
        break;
    }
    */

    int input, accumulator = 0;
    const int ITERATIONS = 5;

    for (int i = 0; i < ITERATIONS; i++)
    {
        printf("Enter an integer (n > 0): ");
        scanf("%d", &input);
        if (input <= 0)
        {
            continue;
        }

        accumulator += input;
    }

    printf("Accumulator: %d\n", accumulator);
    // accumulator += input > 0 ? input: 0;
    return EXIT_SUCCESS;
}
