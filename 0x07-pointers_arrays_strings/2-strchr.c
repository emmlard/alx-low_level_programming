#include "main.h"
/**
* _strchr - locates a character in a string
* @s: string
* @c: first character
*
* Return: pointer to the first occurrence of the character c or NULL
*/

char *_strchr(char *s, char c)
{
	s = &c;

	if (*(s + 0) != '\0')
		return (s);
	else
		return ('\0');
}
