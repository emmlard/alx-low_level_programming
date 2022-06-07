#include "main.h"

/**
* print_last_digit- A function that prints the last digit of a number.
* @n: value of an integer
*
* Return: return the value of the last digit
*/

int print_last_digit(int n)
{
	if (n >= 0)
	{
		n =  n % 10;
		return (n);
	}
	else
	{
		n = (n * -1) % 10;
		return (n);
	}
}
