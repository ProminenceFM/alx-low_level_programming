#include "main.h"

/**
 *rev_string - function to reverse string
 *_putchar - print the characters
 *@s: character for consideration
 *Return: always return 0 for success
*/

void rev_string(char *s)
{
	int count = 0, a, b;
	char *str, yes;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (a = 0; a < (count - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			yes = *(str + b);
			*(str + b) = *(str + (b - 1));
			*(str + (b - 1)) = yes;
		}
	}
}
