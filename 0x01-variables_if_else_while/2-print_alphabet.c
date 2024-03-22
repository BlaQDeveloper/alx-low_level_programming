#include <stdio.h>
/**
 * main - print the alphabet
 * Description: using the main function
 * print the alphabet in lowercase
 * Return: 0(Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
