#include <stdio.h>
/**
* main -  prints all the numbers of base 16 in lowercase
*
* Return: 0
*/

int main(void)
{
	char alpha[] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(alpha[i]);
		i++
	}
	putchar('\n');
	return (0);
}
