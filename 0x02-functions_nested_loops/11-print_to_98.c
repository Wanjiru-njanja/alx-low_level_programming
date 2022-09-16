#include <stdio.h>
/**
 * prints_to_98 - func that prints all the natural numbers from input to 98
 * separate the numbers with commas follwed by a space
 * @n: the number to begin counting at
 */
void print_to_98(int n)
{

	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
