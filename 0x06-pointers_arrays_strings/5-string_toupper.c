#include "main.h"

/**
 * string_toupper - function to change lowercase to uppercase
 * @s: character considered
 * Return: Uppercase char
*/

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
