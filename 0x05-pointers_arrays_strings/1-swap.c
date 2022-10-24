#include "main.h"
/**
 *swap_int - function that waps values
 *@a: first value
 *@b: second value
 *Return: Always 0 for success
*/

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
