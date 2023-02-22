#include <stdio.h>
/**
* main - to print _putchar
*
*Return: 0
*/

int main(void)
{
	char alpha[] = "_putchar";
	int i = 0;


	while (i < 8)
	{
		putchar(alpha[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

