#include "main.h"

/**
* _strcpy - copies the string pointed to by src.
*
* @dest: pointer to the buffer.
* @src: pointer to the source string.
* Return: char
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}