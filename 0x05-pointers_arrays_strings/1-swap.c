#include "main.h"

/**
* swap_int - A function that swaps the values of two integers
* @a: input interger
* @b: input interger
*
* Return: no return
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
