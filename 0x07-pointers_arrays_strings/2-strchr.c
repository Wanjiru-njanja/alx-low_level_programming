#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to check
 * @c: character to check for
 * Return: pointer to the occurence of c in s or null if character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (0);
}
