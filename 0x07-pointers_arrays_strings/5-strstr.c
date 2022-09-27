#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string to check for needle
 * @needle: substring to be found in haystack
 * Return: pointer to the beginning of needle in haystack or null if no match is found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
