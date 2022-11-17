#include "variadic_functions.h"

/**
 * print_char - Prints a char.
 * @arg: A list of arguments 
 */
void print_char(va_list arg)
{
char letter;

letter = va_arg(arg, int);

printf("%c", letter);
}

/**
 * print_int - Prints an int.
 * @arg: A list of arguments
 */
void print_int(va_list arg)
{
int num;

num = va_arg(arg, int);

printf("%d", num);
}

/**
 *print_float - Prints a float.
 *@arg: A list of arguments
 */
float num;

num = va_arg(arg, double);

printf("%f", num);
}

