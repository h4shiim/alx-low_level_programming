#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_digit = abs(n) % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is greater than 5\n", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is 0\n", last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is less than 6 and not 0\n", last_digit);
	}

	return (0);
}
