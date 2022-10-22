#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that verifies if a  character is uppercase or not
 *@c : is the tested character
 *Return: returns 1 ou 0
 */

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
