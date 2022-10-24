#include "main.h"

/**
 *rev_string - function to reverse string
 *_putchar - print the characters
 *@s: character for consideration
 *Return: always return 0 for success
*/

void rev_string(char *s)
{
	int a = 0, b, c;
	char x;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
