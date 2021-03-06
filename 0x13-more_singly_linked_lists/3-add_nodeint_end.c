#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_nodeint_end - print list
 *@head: the head of the list
 *@n: the head of the list
 *Return: length
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *c, *g = *head;

	c = malloc(sizeof(listint_t));
	if (c == NULL)
		return (NULL);
	c->n = n;
	c->next = NULL;
	if (*head == NULL)
	{
		*head = c;
	}
	else
	{
		while (g->next != NULL)
		{
			g  = g->next;
		}
		g->next = c;
	}
	return (c);
}
