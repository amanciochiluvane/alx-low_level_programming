#include "main.h"
#include <stdio.h>

/**
 * print_sign-prints sign of a number
 * @n: character to be verified
 * Return: return 0 or 1
 */

int print_sign(int n)
{
if (n == 0)
{
putchar('00');
}
else if (n > 0)
{
putchar('+1');
}
else
{
putchar('-1');
}
}
