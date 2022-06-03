#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - should "print an output positive if n is greater than 0, zero if n is equals 0, negative if n is less than 0."
* @n: store a different value every time you will run this program
*
* This program will assign a random number to the variable n each time it is executed
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else  if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
