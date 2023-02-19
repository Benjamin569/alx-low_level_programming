#include <stdio.h>
/**
 *
 * main - to print alphabet in lowercase
 *
 * Return: 0
*/

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		putchar(alphabet[i]);
		i++;
	}
	return (0);
}
