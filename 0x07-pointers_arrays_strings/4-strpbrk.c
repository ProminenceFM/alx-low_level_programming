#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  a function that tinds forms of byte in a str
 * @s: d inputted str
 * @accept: inputted char to locate into str
 * Return:  a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}
