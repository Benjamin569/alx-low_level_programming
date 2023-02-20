#include <stdio.h>
/**
* main - to print all single digit numbers starting from 0 using putchar
*
* Return: 0
*/

int main(void)
{
	char numbers[] = "0123456789";
	int i = 0;

	while (i < 10)
	{
		putchar(numbers[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
