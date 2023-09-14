#include "lists.h"

/**
 * print_dlistint - Print the elements of a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *curr = h;
    size_t size = 0;

    while (curr)
    {
        printf("%d\n", curr->n);
        curr = curr->next;
        size++;
    }
    return (size);
}
