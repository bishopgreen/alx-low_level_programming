#include "main.h"

/**
* rev_string - Reverses a string.
*
* string_length: prints number of characters.
* @s: store character.
* @: store character.
* Return: Always 0.
*/

void rev_string(char *s)
{
	int i = 0;
	int r = 0;

	while (s[i])
	{
	i++;
	}

	while (--i > r)
	{
	char front = s[r];
	char back = s[i];

	s[r] = back;
	r++;
	s[i] = front;
	}
}
