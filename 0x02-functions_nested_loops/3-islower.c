#include "main.h"

/**
 *_islower - programs checks for lowercase.
 *@c: is the character to check for.
 *Return: 0 if not lowercase and 1 if lowercase
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
