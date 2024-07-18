#include "sll.h"

int sl_delete_first(Slist **head)
{
    //check if list is empty or not
    if(*head == NULL)
        return FAILURE;
        
    //create local reference pointer for head
    Slist *temp = *head;
    //update head with next node
    *head = temp->link;
    //free the temp node
    free(temp);
    return SUCCESS;

}