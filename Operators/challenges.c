#include <stdio.h>
#include <stdlib.h>

void delimiter()
{
    printf("-----------------------------------------\n");
}

int main()
{
    /**
     * === Shpere ===
     *
     * Calculate surface and volume of a shpere
     *
     * Goals:
     * - prompt user to enter the radius
     * - calculate the surface area
     * - calculate the enclosed volume
     * - print the radius and the results in decimal format (2 digit of precision)
     * - print the radius and the results in scientific notation (3 digits of precision)
     * - check the results

    const double PI = 3.14159;
    double radius = 0;

    printf("Enter shpere radius: ");
    scanf("%lf", &radius);

    double shpere_surface_area = 4 * PI * (radius * radius);
    double shpere_volume = (4.0 / 3.0) * PI * (radius * radius * radius);

    printf("Decimal:\n");
    printf("Shpere surface area with %.2lf radius = %.2lf\n", radius, shpere_surface_area);
    printf("Shpere volume with %.2lf radius = %.2f\n", radius, shpere_volume);
    delimiter();

    printf("Scientific:\n");
    printf("Shpere surfaca area with %.2lf radius = %.3e\n", radius, shpere_surface_area);
    printf("Shpere volume with %.2lf radius = %.3e\n", radius, shpere_volume);
    delimiter();
    */

    /**
     * === Bit Selector ===
     *
     * data: 0xABCD
     *
     * Goals:
     * - N, M design variables
     * - make a selector that selects the bits [N:M] included
     * - print data and result in hexadecimal format, 4 digits wide, zero padding
     * - check these selection ranges
     *   - [0:3] expected result 0x000D
     *   - [4:7] expected result 0x000C
     *   - [8:11] expected result 0x00B
     *   - [12:15] expected result 0x000A

    unsigned data = 0xABCD;
    unsigned N = 4;
    unsigned M = 7;

     * 0b1111 = 15 = 2 ^ 4 - 1
     * 0b0111 = 7 = 2 ^ 3 - 1
     * 0b0011 = 3 = 2 ^ 2 - 1
     * 0b0001 = 1 = 2 & 1 - 1
     *
     * W: width of the bitmask in bits
     *
     * bitmask = 2^W - 1
     *
     * [0:1] --> W = 2
     * [0:2] --> W = 3
     * [N:M] --> W = (M - N) +1
     *
     *shift to left == *2
     shift to right = /2
     *
     * 2^W = 1 << W
     *
     * bitmask = 2 ^ W - 1 = (1 << N) - 1


    unsigned W = M - N + 1;
    unsigned bitmask = (1 << W) - 1;
    unsigned result = (data >> N) & bitmask;
    printf("data --> 0x%04X\n", data);
    printf("result --> 0x%04X", result);
    */

    return EXIT_SUCCESS;
}
