#include "main.h"

/**
 * _strpbrk - The _strpbrk() function
 * @s: string where search is made
 * @accept: string where searched bytes are located
 * Return:Returns a pointer
 */

char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
	return (s);
}
s++;
}

return ('\0');
}

