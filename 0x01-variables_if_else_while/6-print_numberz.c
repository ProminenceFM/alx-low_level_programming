#include <stdio.h>
/**
 *main-program entry point(number to print all single digit of base 10).
 *Return:always 0 for success.
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
