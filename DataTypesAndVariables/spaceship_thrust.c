#include <stdio.h>
#include <stdlib.h>

/**
 * === Spaceship Thrust ===
 *
 * We are working on the man-machine interface of a revolutionary spaceship.
 * Define enumeration constants for different predefined thurst levels,
 * these levels will be used to communicate with the engine controller.
 *
 * The thrust levels are:
 * - none:    0
 * - low;     5
 * - medium;  9
 * - high;    12
 * - maximum; 20
 *
 * Then launch the rocket!
 * We now want to log the thrust level in some critical points:
 *  - set thrust to none ---> log ready to go level
 *  - set thrust to maximum ---> log take off level
 *  - set thrust to medium ---> log entering into the ionosphere
 *  - set thrust to low ---> log traveling to deep space
 */

typedef enum
{
    NONE = 0,
    LOW = 5,
    MEDIUM = 9,
    HIGH = 12,
    MAXIMUM = 20
} SPACESHIP_THRUST;

void delimiter()
{
    printf("====================================================\n");
}

int main()
{
    printf("Lanching a rocket...\n");
    delimiter();
    SPACESHIP_THRUST rocket_status = NONE;
    if (rocket_status == NONE)
    {
        printf("Rocket ready to go, thrust level is %d\n", NONE);
    }

    delimiter();
    rocket_status = MAXIMUM;

    if (rocket_status == MAXIMUM)
    {
        printf("Rocket ready to take off, thrust level is %d\n", MAXIMUM);
    }

    delimiter();
    rocket_status = MEDIUM;

    if (rocket_status == MEDIUM)
    {
        printf("Rocket entering into the ionosphere, thrust level is %d\n", MEDIUM);
    }

    delimiter();
    rocket_status = LOW;

    if (rocket_status == LOW)
    {
        printf("Rocket traveling to deep space, thrust level is %d\n", LOW);
    }

    delimiter();

    return EXIT_SUCCESS;
}
