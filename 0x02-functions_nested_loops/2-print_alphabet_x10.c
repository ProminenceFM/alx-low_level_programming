#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10times
 * by Martins
*/
void print_alphabet_x10(void)
{
	char alph;
	int count = 0;
	while (count++ <=9)
	{
		for(alph = 'a': alph <= 'z': alph++)
			_putchar(alph);
		_putchar('/n');
	}
}
