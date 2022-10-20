#include "main.h"

/**
 * _isalpha - check for alphabets
 * @c: variable to chevk for
 * Return: 1 if alpha and 0 if othetwise
*/

int _isalpha(int c)
{
	if (c >= 'a' && c >= 'A' && c <= 'z' && c <= 'Z' )
		return (1);
	else
		return (0);
}
