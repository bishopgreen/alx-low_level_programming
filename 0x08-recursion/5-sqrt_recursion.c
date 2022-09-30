#include "main.h"
/**
* _sqrt_recursion - function
* @n: integer to get square root of
* Description: function to find sqroot of given integer
* Return: 0, return -1 if no square root.
*/
int _sqrt_recursion(int n)
{
	int square = 2;

	if (n > 0)
	{
		return (isqrt(n, square));
	}
	else if (n <= 0 || n == 1)
	{
		return (n);
	}
}
