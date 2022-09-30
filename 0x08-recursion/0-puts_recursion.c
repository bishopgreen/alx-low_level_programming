#include "main.h"
/**
* _puts_recursion - function for string
* @s: string to check for palindrome
*
* Description: func to check if string is palindrome
* Return: 1 if palindrome, 0 if not
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
