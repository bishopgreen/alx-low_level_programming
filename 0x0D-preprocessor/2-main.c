#include <stdio.h>
#include <stdlib.h>
/**
* main - program
* Description: print name if file it was compiled from.
* Return: Always 0
*/
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
