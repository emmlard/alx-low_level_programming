#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print an output
* @n: store a different value every time you will run this program
*
* Assign a random number to the variable n each time it is executed
* Return: return 0
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
