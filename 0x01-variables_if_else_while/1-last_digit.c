#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - to print the last digit of a number stored in n
 *
 * Return: 0
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastNum = n % 10;
	if (lastNum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	}
	else if (lastNum == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastNum);
	}
	else if (lastNum < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
	}
	return (0);
}
