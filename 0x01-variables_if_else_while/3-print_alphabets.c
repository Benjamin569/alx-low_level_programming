#include <stdio.h>
/**
 * main - to print alphabet in lowercase , followed by an uppercse
 *
 * Return: 0
*/

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUYWXYZ";
	int i = 0;

	while (i < 52)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	putchar('\n');
	return (0);
}
