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
	int sum;
	
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
}
