#include <stdio.h>

/**
 * main _ Entry point
 *
 * Return: always 0
 *
 */

int main(void)
{
	int minutes;
	int movie_time_hr;
	int movie_time_m;
	int number;
	int number1;

	minutes = 60;
	movie_time_hr = 2;
	movie_time_m = 20;
	number = minutes * movie_time_hr;
	number1 = number + movie_time_m;

	printf("The total number of minutes is %d.\n", number1);
	return (0);
}
