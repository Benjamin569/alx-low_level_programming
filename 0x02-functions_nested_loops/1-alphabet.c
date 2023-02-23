#include <stdio.h>
/**
 * print_alphabet - to print alphabet in lowercase
 *
*/

void print_alphabet(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
