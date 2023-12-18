#include <stdio.h>
/**
 * main - print numbers in base 16
 * Description: using main function
 * this program prints numbers in base 16
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
