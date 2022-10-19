#include "main.h"
#include <stdio.h>

/**
 *print_alphabet_x10 - chec the code
 *
 *Return - 0
 */

void print_alphabet_x10(void)
{
int b = 0;

while (b < 10)
{
char a = 'a';

while (a <= 'z')
{
putchar(a);
a++;
}
}
