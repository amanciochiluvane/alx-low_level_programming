#include "main.h"



/**
 * reverse_array -  function that reverses arrys
 * @a: pointer
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
int i = 0;
int b;

while (i < n)
{
n--;
b = a[i];
a[i] = a[n];
a[n] = b;
i++;
}
}
