#include "lists.h"

/**
 * listint_len - list len node.
 * @h: pass the node
 * Return: the number of node.
 **/

size_t listint_len(const listint_t *h)

{
int count;

count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
