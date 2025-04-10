#include <stdio.h>
/**
 * main - Using printf function
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		printf("%d", numbers);
	}
	printf("\n");
	return (0);
}
