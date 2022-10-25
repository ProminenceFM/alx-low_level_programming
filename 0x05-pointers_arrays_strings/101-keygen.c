#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function to generates random valid
 * passwords
 * Return: always 0 for success
 */
int main(void)
{
	int sum = 2772;
	int i;

	srand(time(0));

	while (sum)
	{
		i = rand() % 100;
		if (i <= 94)
			i += 32;
		else
			continue;
		if (sum - i == 0)
		{
			sum -= i;
			printf("%c", i);
		}
		else if (sum - i - 32 > 0)
		{
			sum -= i;
			printf("%c", i);
		}
	}
	return (0);
}
