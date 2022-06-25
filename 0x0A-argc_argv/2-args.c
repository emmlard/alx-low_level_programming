#include <stdio.h>

/**
* main - program that prints its name, followed by a new line
* @argc: argument count
* @argv: argument index
*
* Return: return 0
*/

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
}
