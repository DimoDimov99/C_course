#include <stdio.h>
#include <stdlib.h>

/**
 * === Bunch of Constants ===
 *
 * Define the following numeric constants:
 * - moon_landing: 1969
 * - speed_of_light = 299792458
 * - pi: 3.14159
 * - hexa_dead: 0xDEAD
 * - hexa_secret: 51966
 *
 * Print with following formats:
 * - moon_landing:
 *   - integer, 10 characters width, padded with spaces
 *   - integer, 10 characters width, padded with zeroes
 * - speed_of_light:
 *   - floating point without digits after decimal point
 *   - scientific notation with 3 digit of precision
 * - pi:
 *   - floating point with 2 digits of precision
 *   - scientific notation with 1 digit of precision, sign forced
 * - hexa_dead:
 *   - unsigned hexadecimal integer, uppercase, leading 0x
 *   - unsigned integer, 6 characters width
 * - hexa_secret:
 *   unsigned hexadecimal integer, lowercase, no leading 0x
 *
 */

int main()
{
    const int moon_landing = 1969;
    const double speed_of_light = 299792458.;
    const double PI = 3.14159;
    const unsigned int hexa_dead = 0xDEADU;
    const unsigned int hexa_secret = 51966U;

    printf("%10d\n", moon_landing);
    printf("%010d\n", moon_landing);

    printf("%.0f\n", speed_of_light);
    printf("%.3E\n", speed_of_light);

    printf("%.2f\n", PI);
    printf("%+.1Ei\n", PI);

    printf("0x%X\n", hexa_dead);
    printf("%6u\n", hexa_dead);

    printf("%x\n", hexa_secret);
    printf("%0x\n", hexa_secret);
    return EXIT_SUCCESS;
}
