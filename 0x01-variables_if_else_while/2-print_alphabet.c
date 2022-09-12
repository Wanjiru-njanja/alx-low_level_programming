#include <stdio.h>
/**
* main - print alphabets are in lowercase
*
* Description: using the main function
* this program prints "letters in lowercase"
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
