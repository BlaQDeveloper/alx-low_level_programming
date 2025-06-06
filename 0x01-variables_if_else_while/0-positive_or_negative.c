#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that assign a random number to n
 * Description: print whether the number stored in the
 * variable n is positive or negative.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
