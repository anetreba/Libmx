#include "libmx.h"

void mx_pop_back(t_list **head) {
	t_list *current = *head;
	t_list *tmp;

	if (head && *head && (*head)->next) {
		while (current->next->next != NULL) {
    	    current = current->next;
    	}
    	tmp = current->next;
    	free(tmp);
    	current->next = NULL;
	}
	else if (head && *head) {
		free(*head);
		*head = NULL;
	}
}
