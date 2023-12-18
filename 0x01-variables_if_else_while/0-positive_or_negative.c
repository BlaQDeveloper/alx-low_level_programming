#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints whether a number is zero or positive or negative
 * Description: using the main function
 * this program prints out whether a n is zero or positive or negative
 * Return: 0(Always success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
