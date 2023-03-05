#include "main.h"
/**
 * _memset - to fills memory with a constant byte.
 * @s: pointer to the block of memory to be filled
 * @b: the byte value that will be used to fill the memory area
 * @n: number of bytes to be set.
 *
 * Return: void
*/

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

