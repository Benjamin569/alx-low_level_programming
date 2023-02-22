#include <stdio.h>
/**
 * print_alphabet - to print alphabet in lowercase
 *
*/

void print_alphabet(void)
{
	char i;

	for (i = 97; i < 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
