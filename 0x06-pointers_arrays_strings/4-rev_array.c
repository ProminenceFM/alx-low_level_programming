#include "main.h"

/**
 *reverse_array - function to print reverse of an array
 *@a: array considered
 *@n: values
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
