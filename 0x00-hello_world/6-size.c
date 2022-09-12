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
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of float: %ld byte(s)\n", sizeof(float));
	return (0);
}
