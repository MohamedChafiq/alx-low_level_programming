#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print alphabets lowercase'
 *Return: Always 0
 */
int main(void)
{
	int n = 2;
	int m = 5;

	while (n <= 8)
	{
		putchar(n);
		n++;
	}
	while (m <= 1)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}

