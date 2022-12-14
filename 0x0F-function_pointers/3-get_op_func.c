#include "3-calc.h"

/**
* *get_op_func - selects correct function to perform the
* operation requested by the user.
* @s: selected operator.
* Return: pointer to the appropriate selected function.
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
		int i;

		i = 0;
		while (i < 5)
		{
			if (*s == *ops[i].op)
			return (ops[i].f);
			i++;
		}
		return (NULL);
}
