#include "main.h"



/**
 * swap_int - swap the value
 *
 * @a: first integer.
 * @b: second integer.
 *
 */

void swap_int(int *a, int *b)
{
int c;

c = 0;
c = *a;
*a = *b;
*b = c;
}
