#include <stdio.h>
/**
* main - to print  the lowercase alphabet in reverse
*
* Return: 0
*/

int main(void)
{
	char alpha[] = "zyxwvutsrqponmlkjihgfedcba";
	int i = 0;

	while (i < 26)
	{
		putchar(alpha[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
