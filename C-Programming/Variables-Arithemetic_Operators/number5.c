#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: always 0
 *
 */

int main(void)
{
	int n1;
	int n2;
	int power;

	n1 = 3;
	n2 = 4;
	power = pow(n1, n2);


	printf("The value of 3 to the power of 4 is %d.", power);
	return (0);
}
