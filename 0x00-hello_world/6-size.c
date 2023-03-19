#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0
 */
	int main(void)
{
	(int)(char) a;
	int b;
	long int c;
	long long int d;
	(int)(float) f;

	printf("Size of a char: %lu byte(s) \n", (int)sizeof(a));
	printf("Size of an int: %lu byte(s) \n", (int)sizeof(b));
	printf("Size of a long int: %lu byte(s) \n", (int)sizeof(c));
	printf("Size of a clong long int: %lu byte(s) \n", (int)sizeof(d));
	printf("Size of a float: %lu byte(s) \n", (int)sizeof(f));
	return (0);
}
