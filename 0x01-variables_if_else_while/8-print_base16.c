#include <stdio.h>
/**
 * main-program entry point(printing all numbers of base 16).
 * Return:always 0 for success.
 */
int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
