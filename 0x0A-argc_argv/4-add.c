#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints its name, followed by a new line
* @argc: argument count
* @argv: argument index
*
* Return: return 0 if succesfull, else return 1 if no arguments received.
*/

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
