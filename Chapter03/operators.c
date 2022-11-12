#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

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

    /*
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

    */

    // Bitwise operations

    /**
     * type: uint8_t
     *
     * A = 12 --> 000 1100
     * B =  5 --> 000 0101
     *
     * A & B --> 000 0101 = 4
     * A | B --> 000 1101 = 13
     * A << 1 --> 0001 1000 = 24
     * A >> 1 ---> 0000 0110 = 6
     */

    /*
    uint8_t a = 12;
    uint8_t b = 5;

    printf("A = %u\n", a);
    printf("B = %u\n", b);

    printf("A & B = %u\n", a & b);
    printf("A | B = %u\n", a | b);
    printf("A ^ B = %u\n", a ^ b);
    printf("A << 1 = %u\n", a << 1U);
    printf("A >> 1 = %u\n", a >> 1U);

    //Bitwise operators
    */

    // Asingments operators

    /*
    int a = 0;
    int b = 3;
    printf("b = %d\n", b);
    a = b;
    printf("a = b --> a = %d\n", a);
    a += b;

    printf("a += b --> a = %d\n", a);

    a -= b;
    printf("a -= b --> a = %d\n", a);

    a *= b;
    printf("a *= b --> a = %d\n", a);

    a /= b;
    printf("a /= b --> a = %d\n", a);

    a %= b;

    printf("a %%= b --> a = %d\n", a);
    return EXIT_SUCCESS;
    */

    /*
    int variable = 0;
    printf("%lu\n", sizeof(variable));
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(long int));
    printf("%llu\n", sizeof(long long int));
    printf("%llu\n", sizeof(char));
    printf("%llu\n", sizeof(int16_t));
    printf("%llu\n", sizeof(int32_t));
    printf("%llu\n", sizeof(int64_t));
    printf("%llu\n", sizeof(123 && 456));
    printf("%llu\n", sizeof(123LL && 456LL));
    */

    u_int8_t x = 10; // 0000    1010
    u_int8_t y = 5;  // 0000    0101

    u_int8_t z = x | y;
    printf("%d\n", z); // 0000    1111
}
