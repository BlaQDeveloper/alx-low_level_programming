#include <stdio.h>
/**
 * main - program that prints all single digits
 * Description: prints all single digit numbers of
 * base 10 starting from 0 without using datatype char
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 48; numbers <= 57; numbers++)
	{
		putchar(numbers);
	}
	putchar('\n');
	return (0);
}
