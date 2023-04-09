#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 *
 */

int main(void)
{
	int slices;
	int eat;

	slices = 8;
	eat = 3;

	printf("The number of slices left is %d\n", slices - eat);
	return (0);
}
