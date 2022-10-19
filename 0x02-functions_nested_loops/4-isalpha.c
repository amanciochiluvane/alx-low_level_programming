#include "main.h"
#include <stdio.h>

/**
 * _isalpha - see if is alphabetical
 * @c: character to be verified
 * Return: return 0 or 1
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}

