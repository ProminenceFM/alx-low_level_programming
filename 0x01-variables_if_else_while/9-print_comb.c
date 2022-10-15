#include <stdio.h>
/**
 *main-program entry point(program to print all possible combination of a single digit number).
 *Return:always 0 for success.
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

