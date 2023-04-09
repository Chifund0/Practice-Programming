#include <stdio.h>

/** 
 * main - Entry point
 *
 * Return: always 0
 *
 */

int main(void)
{
	int distance;
	int time;
	int speed;
	
	distance = 120;
	time = 2;
	speed = distance / time;

	printf("Speed = distance (km) / time (hrs) = 120km / 2hrs = 60km/hr.\n");
	return (0);
}
