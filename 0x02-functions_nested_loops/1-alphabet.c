#include "main.h"

/**
* print_alphabet - prints the alphabet in lowercase
*
* Return: return 0
*/

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
