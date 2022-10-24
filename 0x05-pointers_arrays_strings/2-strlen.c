#include "main.h"

/**
 *_strlen - function that returns the length of a string
 *@s: string value of consideration
 *Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	for (; *s++;)
		length++;
	return (length);
}
