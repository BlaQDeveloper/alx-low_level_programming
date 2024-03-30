#include <stdio.h>
/**
 * main - print combinations of digits
 * Description: using the main function
 * print all possible combinations of
 * single numbers
 * Return: 0(Success)
 */
int main(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
