#include <stdio.h>

/**
* main - Finds and prints the largest prime factor
*
* Return: return 0
*/

int main(void)
{
	long int n;
	long int prime = 612852475143;

	for (n = 2; n <= prime; n++)
	{
		if (prime % n == 0)
		{
			prime /= n;
			n--;
		}
	}
	printf("%ld\n", n);
	return (0);
}
