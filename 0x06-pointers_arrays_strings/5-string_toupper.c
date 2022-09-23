#include "main.h"

/**
* _string_toupper -function that changes all lowercase letters of a string to uppercase
* @str: string to be changed
* Return: address to the string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
