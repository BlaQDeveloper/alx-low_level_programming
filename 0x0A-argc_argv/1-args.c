#include <stdio.h>

/**
 * main - prints the name number of arguments passed to it
 * @argc: number of arguments passed to the function
 * @argv: number vector of pointers to strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;
		printf("%d\n", i - 1);
	}
	return (0);
}
