#include "main.h"

/**
* main - Write a program that prints _putchar
*
* Return: return 0
*/

int main(void)
{
	char school[10] = "_putchar";
	int a;

	for (a = 0; a <= 7; a++)
	{
	_putchar(school[a]);

	}
	_putchar(9);

	return (0);
}
