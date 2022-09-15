#include "main.h"
/**
 * _islower - checks for lower case characters
 * @c: is the int that will use for argumennt of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
