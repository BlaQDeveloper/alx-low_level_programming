#include <stdio.h>
/**
 * main - Entry point
 * Description: prints out the size of various datatypes
 * Return: 0(Always success)
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of long int: %i byte(s)\n", sizeof(long));
	printf("Size of long long int: %i byte(s)\n", sizeof(long long));
	printf("Size of float: %i byte(s)\n", sizeof(float));
	return (0);
}
