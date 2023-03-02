#include "main"
/**
 * _strcat - to concatenate two srtings
 * @dest: to find the value of memeory address of dest
 * @src: to find the value of memory address of the src
 * Return: a pointer to the rsulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (*dest[i] != '\0')
	{
		i++;
	}

	while (*src[i} != '\0')
	{
		*dest[i] = *src[j};
		i++;
		j++;
	}
	*dest[i] = '\0';

	return (*dest);
}
