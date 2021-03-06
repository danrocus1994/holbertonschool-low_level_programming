#include "function_pointers.h"
/**
 *print_name - somename be printed
 *@name: the name
 *@f: the function to be called
 *Return: nothing, void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
