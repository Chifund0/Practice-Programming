#include <stdio.h>

int main(void)
{
	int C;
	int N;
	int F;

	C = 25;
	N = 30;

	F = C + N;
	printf("%d\n", F);

	F = C - N;
	printf("%d\n", F);

	F = C * N;
	printf("%d\n", F);

	F = C / N;
	printf("%d\n", F);

	F = C % N;
	printf("%d\n", F);

	F = C++;
	printf("%d\n", F);

	F = N--;
	printf("%d\n", F);
}
