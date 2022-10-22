#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 * Return: Always 0 for success
 */
int main(void)
{
	unsigned long a = 0, b = 1, absum;
	float total;

	while (1)
	{
		absum = a + b;
		if (absum > 4000000)
			break;

		if ((absum % 2) == 0)
			total += absum;

		a = b;
		b = absum;
	}
	printf("%.0f\n", total);

	return (0);
}
