#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printif("Size of a char: %zu byte(s)\n", sizeof(char));
	printif("Size of an int: %zu byte(s)\n", sizeof(int));
	printif("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printif("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printif("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
