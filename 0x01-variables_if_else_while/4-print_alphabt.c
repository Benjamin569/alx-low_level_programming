#include <stdio.h>
/**
 * main - to print alphabet in lowercase, execpt q and e
 *
 * Return: 0
*/

int main(void)
{
	char alphabet[] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;

	while (i < 24)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
