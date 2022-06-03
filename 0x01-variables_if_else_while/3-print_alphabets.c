#include <stdio.h>

/**
* main - print to the standard output 'alphabet in lowercase'
*
* Return: return 0
*/

int main(void)
{
	char c;

	for (c = 'A'; c <= 'Z'; c++){
		putchar(c);
	}
	for (c = 'a'; c <= 'z'; c++){
		putchar(c);
	}
	putchar('\n');
	return (0);
}
