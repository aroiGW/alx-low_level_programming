#include <stdio.h>

/**
 * main - the main function
 *
 * Return: always 0
 */
int main(void)
{
	printf("The size of char: %lu byte(s)\n", sizeof(char));
	printf("The size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("size of long long int: %lu byte(s)\n", sizeof(long long int))
	printf("The size of float: %lu byte(s)\n", sizeof(float));	
	return (0);
}

