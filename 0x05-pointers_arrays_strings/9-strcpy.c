#include "main.h"
/**
 *_strcpy - function to copy the string pointed to by src to dest
 *@dest: considered character
 *@src: considered character
 * Return: always 0 for success
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
