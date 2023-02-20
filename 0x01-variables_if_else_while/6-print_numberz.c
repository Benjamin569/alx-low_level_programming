#include <stdio.h>
/**
* main - to print all single digit numbers starting from 0 using putchar
*
* Return: 0
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
