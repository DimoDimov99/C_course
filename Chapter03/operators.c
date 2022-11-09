#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    float first_number, second_number, result = 0;

    printf("Enter first number operand (float)\n");
    scanf("%f", &first_number);
    printf("Enter second number operand (float)\n");
    scanf("%f", &second_number);
    result = first_number + second_number;
    printf("%.3f + %.3f = %9.3f\n", first_number, second_number, result);

    result = first_number - second_number;
    printf("%.3f - %.3f = %9.3f\n", first_number, second_number, result);

    result = first_number * second_number;
    printf("%.3f * %.3f = %9.3f\n", first_number, second_number, result);

    result = first_number / second_number;
    printf("%.3f / %.3f = %9.3f\n", first_number, second_number, result);


    // Post - Increment / Decrement
    // B = A++
    // 1. Uses the value of A in the expression
    // 2. Icrement / Decrement A

    // Pre - Icrement / Decrement
    // 1. Increment / Decrement A
    // 2. Uses the value of A in the expression

    int a, b = 0;
    b = a++;

    printf("After postincrement:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    a = 0;
    b = ++a;

    printf("After preincrement:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    */

    /*

    int a, b = 0;

    printf("Enter operant a (int)\n");
    scanf("%d", &a);

    printf("Enter operant b (int)\n");
    scanf("%d", &b);

    printf("A == B --> %d\n", a == b);
    printf("A != B --> %d\n", a != b);
    printf("A > B --> %d\n", a > b);
    printf("A < B --> %d\n", a < b);
    printf("A >= B --> %d\n", a >= b);
    printf("A <= B --> %d\n", a <= b);
    */

    // Venn Diagrams - Set theory

    printf("Truth Table\n");
    printf("------------------------------------\n");
    printf("| x | y | x AND y | x OR y | NOT x |\n");
    printf("------------------------------------\n");

    bool x, y;

    x = 0;
    y = 0;

    printf("| %d | %d |%5d    |%5d   |%4d   |\n", x, y, x && y, x | y, !x);

    x = 1;
    y = 0;

    printf("| %d | %d |%5d    |%5d   |%4d   |\n", x, y, x && y, x | y, !x);

    x = 0;
    y = 1;

    printf("| %d | %d |%5d    |%5d   |%4d   |\n", x, y, x && y, x | y, !x);

    x = 1;
    y = 1;

    printf("| %d | %d |%5d    |%5d   |%4d   |\n", x, y, x && y, x | y, !x);

    return EXIT_SUCCESS;
}
