#include <stdio.h>
/**
 * print_alphabet_x10 - to print alpha 10x
 *
*/

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; ++i)
	{
		for (j = 97; j < 123; ++j)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
