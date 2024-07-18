#include "sll.h"

int insert_at_first(Slist **head, data_t data)
{
	 //create a node
    Slist *new = malloc(sizeof(Slist));
    //error check
    if(new == NULL)
        return FAILURE;
    //update data and link part
    new->data = data;
    new->link = *head;
    //establish the link b/w head and new node
    *head = new;
    return SUCCESS;
}