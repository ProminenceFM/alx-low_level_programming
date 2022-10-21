#include "main.h"

/*
 * print_most_numbers - mprintt  number 0-9 except 2 nd 4
 * Return: 0 to 9 except 2 to 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar(i)
		}
	}
}
