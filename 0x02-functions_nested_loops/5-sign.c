#include "main.h"

/**
 * print_sign - print out sign values of integers
 * @n: isnumber considered
 *
 * Return: 1 and sign + for positive
 * 0 for zero
 * -1 and - for negative
*/

int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
