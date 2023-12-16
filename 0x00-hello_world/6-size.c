#include <stdio.h>
/**
 * main - prints the size of data types
 * Description: using the main function
 * this program prints the size of various datatypes
 * Return: 0(Always success)
 */
int main(void)
{
	printf("Size of a char: %ld byte()\n", sizeof(char));
	printf("Size of a int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
