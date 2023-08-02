#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

  /**
   *print_list - prints all the elements of a list_t list.
   * @h: pointer to the list.
   * Return: number of nodes.
   **/

size_t print_list(const list_t *h)
  {
    size_t Nodes = 0;
    do
      {
	if (h->str)
	  printf("[%d] %s\n", h->len, h->str);
	else
	  printf("[0] (nil)\n");
	Nodes++;
	h = h->next;
      }
    while (h != NULL);
    return (Nodes);
  }
