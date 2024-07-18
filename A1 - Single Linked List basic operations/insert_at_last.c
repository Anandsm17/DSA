#include "sll.h"

int insert_at_last(Slist **head, data_t data)
{
     //create a node
    Slist *new = malloc(sizeof(Slist));
    //error check
    if(new == NULL)
        return FAILURE;
    //update data and link part
    new->data=data;
    new->link=NULL;
    //check if list is empty or not
    if(*head == NULL)
    {
        *head = new;
        return SUCCESS;
    }
    //create local reference pointer for head
    Slist *temp = *head;
    //traversing through the list
    while(temp->link != NULL)
        temp = temp->link;

    //establish the link between last node and new node
    temp->link = new;
    return SUCCESS;
}