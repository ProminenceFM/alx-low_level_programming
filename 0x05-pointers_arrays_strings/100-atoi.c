#include "main.h"

/**
 *_atoi- function that convert a string to an integer.
 *@s: string to convert
 *Return: integer value
*/

int _atoi(char *s)
{
	int a = 0, xstr = 1, yint = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			*xstr = -1;
		}

		while (s[a] >= 48 && s[a] <= 57)
		{
			yint = 1;
			sx = (sx * 10) + (s[a] - '0');
			a++;
		}

		if (yint == 1)
		{
			break;
		}

		a++;
	}
	sx = *yint;
	return (sx);
}
