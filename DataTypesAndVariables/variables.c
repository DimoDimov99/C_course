#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Enums
// ====================================================== //

enum menu
{
    TEA,     // 0
    COFFE,   // 1
    JUICE,   // 2
    BEER     // 3
};

enum second_menu
{
    COCA_COLA = 3,
    FANTA = 6,
    SPARKLING_WATER = 9,
    WATER = 10
};

enum months
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC,
};

typedef enum
{
    MALE,
    FEMALE,
    OTHER
} SEX;

// ====================================================== //

int main()
{
    /* int status = -1;
    printf("status value: \n");
    printf("%6d\n", status);
    printf("123456\n");
    return EXIT_SUCCESS; */

    // ====================================================== //
    // Integers
    unsigned students = 25U;
    unsigned long long world_population = 7801235945ULL;

    printf("%12u | Students in the class\n", students);
    printf("%12llu | World population now\n", world_population);

    uint8_t count = UINT8_MAX;
    printf("%12u | unsigned 8 bit int max value\n", count);

    count = count + 1;
    printf("%12u | unsigned 8 bit int max value + 1\n", count);

    printf("%12d | INT32_MIN\n", INT32_MIN);
    printf("%12d | INT32_MAX\n", INT32_MAX);
    printf("%12u | UINT32_MAX\n", UINT32_MAX);
    // ====================================================== //

    // ====================================================== //
    // Floats and Doubles

    /* 1.23456789 */
    double decimal_digits = 1.23456789;

    /* 7.801 x 10^9 */

    double world_population_2 = 7.901E9;

    /* 6.626 x 10^-34 */
    double plank_constant = 6.626E-34;

    printf("%12.1f | 1 decimal digit\n", decimal_digits);
    printf("%12.3f | 3 decimal digit\n", decimal_digits);
    printf("%12.1f | world_population_2 decimal, 1 digit of precision\n", world_population_2);
    printf("%12.1e | world_population_2, scientific, 1 digit of precision\n", world_population_2);
    printf("%12.3e | world_population_2, scientific, 3 digit of precision\n", world_population_2);
    printf("%12.1E | plank_constant, scientific, 1 digit of precision\n", plank_constant);
    printf("%12.3E | plank_constant, scientific, 3 digit of precision\n", plank_constant);
    // ====================================================== //

    // ====================================================== //
    // Characters
    // useful resource => asciitable.com

    char c = 'A';
    printf("char c: %d\n", c);
    printf("char c: %c\n", c);

    c = 66;
    printf("char c: %d\n", c);
    printf("char c: %c\n", c);

    // Acquire user input
    printf("Input a character: ");
    c = getchar();
    printf("You entered: %c character, which correspondes to number %d in ASCII table!\n", c, c);

    // ====================================================== //

    // Boleans
    // ====================================================== //

    /* Before C99 */
    /*
    int a = 1; // true
    int b = 0; // false
    */
    bool true_value = true;
    bool false_value = false;

    printf("true_value: %d\n", true_value);
    printf("false_value: %d\n", false_value);

    // ====================================================== //

    enum menu mario = COFFE;
    enum menu andrea = BEER;

    enum second_menu dimo = SPARKLING_WATER;
    enum second_menu radina = WATER;

    printf("Mario ordered: %d\n", mario);
    printf("Andrea ordered: %d\n", andrea);

    printf("Dimo ordered: %d\n", dimo);
    printf("Radina ordered: %d\n", radina);

    enum months my_favourite_month = DEC;

    if (my_favourite_month == 12)
    {
        char month_str[] = "December";
        printf("Dimo's favourite month is: %d which is %s\n", my_favourite_month, month_str);
    }

    SEX male_person = MALE;
    SEX female_person = FEMALE;

    printf("Male SEX is: %d\n", male_person);
    printf("Female SEX is: %d\n", female_person);
}
