#include "lists.h"
/**
 *get_dnodeint_at_index - free the elemnts of a double linked list
 *@head: the header
 *@index: the needed index
 *Return: pointer at the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int pos = 0;

	while (ptr)
	{
		if (pos == index)
		{
			return (ptr);
		}
		pos++;
		if (!ptr->next)
			break;
		ptr = ptr->next;
	}
	return (NULL);
}
