#include "main.h"

/**
* _isalpha - checks for alphabetic character
* @c: The character in ASCII code
*
* Return: return 1 if c is a letter, lowercase or uppercase, otherwise 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
