#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * @a: considered integer
 * @n: considered integer
 * Return: Always 0 for success
 */
void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
		if (arr != n - 1)
		printf("%d, ", a[arr]);
		else
			printf("%d", a[arr]);
	printf("\n");
}
