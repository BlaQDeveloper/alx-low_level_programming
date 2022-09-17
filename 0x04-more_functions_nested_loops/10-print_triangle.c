#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: parameter of a triangle
 * Return: returns nothing
 */
void print_triangle(int size)
{
	int inc1 = 1, inc2;

	while (inc1 <= size && size > 0)
	{
		inc2 = 0;
		while (inc2 < size - inc1)
		{
			putchar(' ');
			inc2++;
		}
		inc2 = 0;
		while (inc2 < i)
		{
			putchar('#');
			inc2++;
		}
		putchar('\n');
		inc1++;
	}
	if (inc1 == 1)
		putchar('\n');
}
