#include <stdio.h>
/**
 * main - prints out numbers with commas and space
 * Description: using main function
 * this program print numbers sepearted by commas
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
