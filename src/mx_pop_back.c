#include "libmx.h"

void mx_pop_back(t_list **head) {
	t_list *current = *head;
	if (head && *head && (*head)->next) {
		while (current->next->next != NULL) {
    	    current = current->next;
    	}
    	free(current->next);
    	current->next = NULL;
	}
	if (head && *head) {
		free(*head);
		*head = NULL;
	}
}
