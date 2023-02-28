#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: point to the string
 * Return: the lenght of the string
*/

int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
