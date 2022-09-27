#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string to check for needle
 * @needle: substring to be found in haystack
 * Return: pointer to the beginning of needle in haystack and null if no match is found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
