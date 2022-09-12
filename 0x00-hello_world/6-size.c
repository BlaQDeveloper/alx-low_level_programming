#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: Using the main function
 * this program print the size of various types in computer
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	fprintf(stderr, "Size of a char: %ld byte(s)\n", (unsigned long)sizeof(a));
	fprintf(stderr, "Size of an int: %ld byte(s)\n", (unsigned long)sizeof(b));
	fprintf(stderr, "Size of long int: %ld byte(s)\n", (unsigned long)sizeof(c));
	fprintf(stderr, "Size of long long int: %ld byte(s)\n", (unsigned long)sizeof(d));
	fprintf(stderr, "Size of float: %ld byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
