#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers with commas and spaces
 *
 * Description: using main function
 * this program prints "0-9 separated by commas"
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 38;  c <= 47; c++)
	{
		putchar(c);
		if (c != 47)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
