#include <stdio.h>

#include <time.h>

#include <stdlib.h>

/**
 * positive_or_negative - print a number
 * @i : integer
 * if the number is less than 0: is negative, followed by a new line
 * Return: 0
 */

void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
}
