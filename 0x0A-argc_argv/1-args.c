#include <stdio.h>

/**
* main - program that prints its name, followed by a new line
* @argc: argument count
* @argv: argument index
*
* Return: return 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
