#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabet lowercase and uppercase'
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (n <= 90)
	{
		putchar(m);
		n++;
	}
	putchar('\n');
	return (0);
}
