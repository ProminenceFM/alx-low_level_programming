#include "main.h"

/**
 * _memset - a function that fills memory w cbytes
 * @s: location to be filled
 * @b: what should be in the location
 * @n: number of bytes to fill
 * Return: pointer to filled location
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
