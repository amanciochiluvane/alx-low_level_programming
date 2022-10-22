#include "main.h"

/**
 * _isdigit - function that verifies if a  character is a digit or not
 * @c : is the character that will be tested
 * Return: returns 1 or 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}

