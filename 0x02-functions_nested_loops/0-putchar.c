#include "main.h"

/**
 * main- function that prints test
 *
 * Return:return 0
 */

int main(void)
{
	char hello[] = "_putchar";

	int i;

	for (i = 0 ; i < 8 ; i++)
	{
		_putchar(hello[i]);
	}
	_putchar(10);
	return (0);
}

