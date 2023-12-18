#include <stdio.h>
/**
 * main - prints out numbers with commas and space
 * Description: using main function
 * this program print numbers sepearted by commas
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
