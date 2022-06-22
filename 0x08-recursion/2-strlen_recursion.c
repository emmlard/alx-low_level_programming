#include "main.h"

/**
* _strlen_recursion - a function that returns the length of a string
* @s: string
*
* Return: return len
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	while ((*s + i) != '\0')
		i = i + 1;
	return (i);
}
