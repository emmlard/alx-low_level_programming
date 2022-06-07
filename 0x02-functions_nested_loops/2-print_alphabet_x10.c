#include "main.h"

/**
* print_alphabet - prints the alphabet in lowercase
*
* Return: return 0
*/

void print_alphabet_x10(void)
{
	int a, i;

	for (a = 0; a < 10; a++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
