#include "main.h"

/**
 * print_line - print out lines
 * @n: lenghth of line
 *
 * Return: success
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
