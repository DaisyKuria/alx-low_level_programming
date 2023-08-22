#include "main.h"

/**
 * positive_or_negative - Determines if a num is positive, negative, or zero
 * @i: Number to be checked
 * Return: No return value (void)
 */
void positive_or_negative(int i)
{
    if (i < 0)
    {
        printf("%d is negative\n", i);
    }
    else if (i > 0)
    {
        printf("%d is positive\n", i);
    }
    else
    {
        printf("%d is zero\n", i);
    }
}

