#include "main.h"
/**
* print_triangle - prints a square
* @size: The character in ASCII code
*
* Return: no return
*/

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < (size - 1); j++)
				_putchar(' ');
			for (j--; j < size; j++)
				_putchar(35);
		}
	}
	else
	_putchar('\n');
}
