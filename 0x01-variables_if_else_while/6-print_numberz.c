#include <stdio.h>
/**
 * main - print out numbers from 0 to 9
 * Description: using the main function
 * print out numbers from 0 to 9
 * Return: 0(Success)
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
