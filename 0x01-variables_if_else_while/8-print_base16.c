#include <stdio.h>
/**
 * main - print out hexadecimal in lowercase
 * Description: using the main function
 * print the hexadecimal in lowercase
 * Return: 0(Success)
 */
int main(void)
{
	char digit;
	char alphabet;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
