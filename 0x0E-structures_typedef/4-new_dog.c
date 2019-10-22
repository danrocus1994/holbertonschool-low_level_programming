#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *new_dog - print a dog
 *@name: th dog
 *@age: som age
 *@owner: some owner
(* a blank line
*Description: smiley is my dog my dog)?
(* section header: header of this dog is dog.h)*
 *Return: nothing
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *na, *ow;
	int nl = 0, ol = 0;
	dog_t newd, *p;

	while (*(name + nl) != '\0')
		nl++;
	nl++;
	while (*(owner + ol) != '\0')
		ol++;
	ol++;
	na = malloc(nl * sizeof(char));
	if (na == NULL)
		return (NULL);
	for (nl = 0; name[nl] != '\0'; nl++)
		na[nl] = name[nl];
	na[nl] = '\0';
	ow = malloc(ol * sizeof(char));
	if (ow == NULL)
		return (NULL);
	for (ol = 0; owner[ol] != '\0'; ol++)
		ow[ol] = owner[ol];
	ow[ol] = '\0';
	newd.name = na;
	newd.age = age;
	newd.owner = ow;
	p = &newd;
	return (p);
}
