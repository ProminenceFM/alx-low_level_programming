#include <stdio.h>
/**
 *main-program that prints the alphabet in lowercase, and then in uppercase
 *Return: always 0 for success
**/
int main(void)
{
	char i;
	char j;
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
