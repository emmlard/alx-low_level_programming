#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print the last digit of the number stored in the variable n
*
* Return: return 0
*/

int main(void)
{
	int n, lsDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lsDigit = n % 10;

	if (lsDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lsDigit);
	}
	else if (lsDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lsDigit);
	}
	else if (lsDigit <= 5)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lsDigit);
	}
	return (0);
}
