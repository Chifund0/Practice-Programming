#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 *
 */

int main(void)
{
	int Cash_in_hand;
	int Expenditure;
	int Balance;

	Cash_in_hand = 100;
	Expenditure = 35;
	Balance = Cash_in_hand - Expenditure;

	printf("The amount left after spending $35 is $%d.\n", Balance);
	return (0);
}
