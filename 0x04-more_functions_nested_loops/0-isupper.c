#include "main.h"

/**
 * _isupper - a function that checks for a digit 0-9
 * @c: input
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	else
		return (0);
}
