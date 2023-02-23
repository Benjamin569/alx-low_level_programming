#include <stdio.h>
/**
 *_islower - to check if c is lower or uppercase
 *@c: to be checked
 * Return: 1
*/

int _islower(int c);
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91)
	{
		return (1);
	}
	else
		return (0);
}
