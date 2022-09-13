#include<stdio.h>
 /**
  * main - Entry point
  *
  * sizeof - determines variable size by data type prints to stdio
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char c;
	int i;
	float f;

/**
 *  @c,i,f: This is declaring variable types
 * 
 * then getting sizeof using the following method.
 */
	
printf("Size of a char: %d byte(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
