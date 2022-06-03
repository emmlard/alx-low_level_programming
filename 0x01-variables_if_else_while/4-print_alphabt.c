#include <stdio.h>

/**
* main - Prints the alphabet without q and e.
*
* Return: return 0
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
