#include "main.h"
/**
* print_square - prints a square
* @size: The character in ASCII code
*
* Return: no return
*/

void print_square(int size)
{
	int i, square;

	for (i = 0; i < size; i++)
	{
		for (square = 0; square < size; square++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
