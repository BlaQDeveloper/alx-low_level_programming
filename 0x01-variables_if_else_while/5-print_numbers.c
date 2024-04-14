#include <stdio.h>
/**
 * main - print out numbers from 0 to 9
 * Description: using the main function
 * print out numbers from 0 to 9
 * Return: 0 (Success)
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
