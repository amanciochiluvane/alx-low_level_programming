#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - check the code
 *
 * Return - it will return 0
 */


void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar (alp);

		alp++;
	}
	putchar ('\n');
}
