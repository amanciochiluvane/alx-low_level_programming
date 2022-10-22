#include "main.h"

/**
 * print_most_numbers - print numbers excepting 2 and 4
 *
 * Return : nothing
 */

void print_most_numbers(void)
{
int number;
for (number = 48; number < 58; number++)
{
if ((number == 50) || (number == 52))
{
continue;
}
putchar(number);
}
putchar(10);
}

