#include "main.h"

/**
 * _isalpha - check for alphabets
 * @c: variable to chevk for
 * Return: 1 if alpha and 0 if othetwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
