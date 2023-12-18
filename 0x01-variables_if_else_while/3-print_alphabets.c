#include <stdio.h>
/**
 * main - prints alphabets in both lower and uppercase
 * Description: using main function
 * this program print the alphabets in both lower and uppercase
 * Return: 0
 */
int main(void)
{
	char ch;
	char alphabet;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
