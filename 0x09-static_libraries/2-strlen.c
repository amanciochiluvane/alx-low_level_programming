#include "main.h"


/**
 * _strlen - calculate the length
 *
 * @s: the string
 * Return: the length
 */


int _strlen(char *s)
{
int i;
int length = 0;

for (i = 0; s[i] != '\0'; i++)
{
length++;
}
return (length);
}


