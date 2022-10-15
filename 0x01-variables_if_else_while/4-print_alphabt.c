#include <stdio.h>

/**
 *main-program entry point(print all letters except q and e).
 *Return:always 0 for success.
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
