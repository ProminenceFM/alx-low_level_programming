#include "main.h"

/**
 * largest_number - prints largest number
 * @a: the first inputted number
 * @b: second inputted number
 * @c: third inputted number
 * Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else 
	{
		largest = c;
	}
	return largest;
}
