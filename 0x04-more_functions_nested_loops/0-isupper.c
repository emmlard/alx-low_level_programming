#include "main.h"

/**
* _isupper - A unction that checks for uppercase character
* @c: The character in ASCII code
*
* Return: return 1 if c is uppercase otherwise 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
