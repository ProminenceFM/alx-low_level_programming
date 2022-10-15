#include <stdio.h>

/**
 *main-program entry point(printing numbers base 10.
 *Return:always 0 for success.
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
