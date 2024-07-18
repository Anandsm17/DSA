#include "sll.h"

int sl_delete_last(Slist **head)
{
 //check if list is empty or not
    if(*head == NULL)
        return FAILURE;
    //create local reference pointer for head
    Slist *temp = *head;
    //check for first node
    if(temp->link == NULL)
    {
        free(*head);
        *head = NULL;
        return SUCCESS;
    }
    //Traverse till the last node 
    //Below loop checks for NULL in the immediate next node from the current node
    while(temp->link->link != NULL)
    {
        temp = temp->link;
    }
    //update link to null
    temp->link = NULL;
    //free link of temp
    free(temp->link);
    return SUCCESS;
}