#include <stdio.h>
/**
 * main - print out the alphabets
 * Description: using the main function
 * print the alphabets in both upper and lowercase
 * Return: 0(Success)
 */
int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);
}
