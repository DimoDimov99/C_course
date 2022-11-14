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

    /*
    int a = 9;
    int b = 3;
    int c = a > b ? a : b;
    printf("c: %d\n", c);
*/

    // Switch statement example

    /*
    int selection = 1;
    switch (selection)
    {
    case 1:
        printf("Selected option1\n");
        break;
    case 2:
        printf("Selected option2\n");
        break;
    default:
        printf("Defaul selection");
        break;
    }
*/

    char operator= ' ';
    double operand_a = 0;
    double operand_b = 0;
    double result = 0;

    printf("Enter first operand: ");
    scanf("%lf", &operand_a);

    getchar();
    printf("Enter the operator (+,-,*,/)\n");
    scanf("%c", &operator);

    printf("Enter second operand: ");
    scanf("%lf", &operand_b);

    switch (operator)
    {
    case '+':
        result = operand_a + operand_b;
        break;
    case '-':
        result = operand_a + operand_b;
        break;
    case '*':
        result = operand_a + operand_b;
        break;
    case '/':
        result = operand_a / operand_b;
        break;
    default:
        printf("Please provide a legal operand!\n");
        return -1;
    }

    printf("%.2lf %c %.2lf = %.2lf\n", operand_a, operator, operand_b, result);
    return EXIT_SUCCESS;
}
