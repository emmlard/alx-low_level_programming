#include "main.h"

/**
* _islower - return 1 if c is a lowercase character otherwise return 0
* @c: The character in ASCII code
*
* Return: 1 for lowercase character. 0 for the rest.
*/

int _islower(int c)
{
	if (c >= 97 && c <= 112)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
