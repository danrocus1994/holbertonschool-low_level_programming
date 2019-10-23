#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - assign a oprator pointer to run the command
 *@argc:  arg count
 *@argv: arg vector
 *Return: error if something is wrong
 */
int main(int argc, char **argv)
{
	int res;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = f(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
