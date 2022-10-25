#include "main.h"

/**
 *_atoi- function that convert a string to an integer.
 *@s: string to convert
 *Return: integer value
*/

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, x = 0, y = 1, z = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			y *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				z *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		x = x + ((*(s + i) - 48) * z);
		z /= 10;
	}
	return (x * z);
}
