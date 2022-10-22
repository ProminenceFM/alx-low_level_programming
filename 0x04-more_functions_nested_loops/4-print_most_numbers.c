#include "main.h"

/**
 *print_most_numbers- mprintt  number 0-9 except 2 nd 4
 *Return: c
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || c == '4'))
	_putchar(c);
	}
	_putchar('\n');
}
