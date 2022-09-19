#include "main.h"

/**
* print_square - prints a square.
*
* @size: size of square
*/

void print_square(int size)
{
	int i;
	int d;

	if (size <= 0)
	_putchar(10);
	else
	{
		for (i = 0; i < size; i++)
		{
			for (d = 1; d < size; d++)
			{
			_putchar('#');
			}
		_putchar('#');
		_putchar(10);
		}
	}
}
