#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: where to be copied to
 * @src: location to be copied from
 * @n: bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
