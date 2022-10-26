#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first strring to copy
 * @s2: second string to copy
 * @n: no. of bytes of s2 to copy
 * Return: char pointer to a newly allocated place in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;

	if (s2 ==NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < i; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
}	
