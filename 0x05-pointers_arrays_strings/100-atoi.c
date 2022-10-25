#include "main.h"

/**
 *_atoi- function that convert a string to an integer.
 *@s: string to convert
 *Return: integer value
*/

int _atoi(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
