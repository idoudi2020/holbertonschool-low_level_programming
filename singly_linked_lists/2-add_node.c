#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - prints all the elements of a list_t list.
 * @head: pointer to the first element of the list.
 * @str: char.
 * Return: number of nodes.
 **/
list_t *add_node(list_t **head, const char *str)
{
  list_t *Nodes = (list_t *)malloc(sizeof(list_t));
  if (!Nodes)
    return (NULL);
  Nodes->str = strdup(str);
  Nodes->len = strlen(str);
  Nodes->next = *head;
  *head = Nodes;
  return (Nodes);
}
