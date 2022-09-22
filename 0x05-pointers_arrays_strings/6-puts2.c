#include "main.h"

/**
* puts2 - print every other character of a string.
* @str: character
*/
void puts2(char *str)
{
	int counter = 0;
	int i = 0;

	while (str[i])
	{
	counter++;
	i++;
	}
	for (i = 0; i < counter; i++)
	{
	if (i % 2 == 0)
	{
	_putchar(str[i]);
	}
	}
	_putchar(10);
}
