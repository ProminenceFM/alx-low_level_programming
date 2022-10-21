#include "main.h"
/**
 *more_numbers- prints alphabet 10times
 *by Martins
*/

void more_numbers(void)
{
	int alph;
	int count = 0;

	while (count++ <= 9)
	{
		for (alph = 0; alph <= 14; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
