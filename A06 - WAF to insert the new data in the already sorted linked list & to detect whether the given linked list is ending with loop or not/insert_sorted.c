#include "sll.h"

/* Function for insert the number in sorted linked list */
int insert_sorted( Slist **head, data_t data) 
{ 
    if(*head == NULL)
    {
 
        Slist *new = malloc(sizeof(Slist));
        if(new == NULL)
            return FAILURE;
        new -> data = data;
        new ->link = NULL;
        *head = new;
        return SUCCESS;
    }
Slist *temp1 = *head;
Slist *temp2 = *head;
temp2 = temp2->link;
 
if(temp2 == NULL)
{
if(((temp1->data) < data))
{
//insert after temp1
Slist *temp = malloc(sizeof(Slist));
            if(temp == NULL)
                return FAILURE;
//assign the node structure i.e create a new node
temp->data = data;
temp->link = NULL;
temp1->link = temp;
return SUCCESS;
}
else
{
//insert before temp1
Slist *new = malloc(sizeof(Slist));
            if(new == NULL)
                return FAILURE;
new->link = *head;
new->data = data;
*head = new;
return SUCCESS;
}
}
 
while(temp2)
{
 
if((data < (temp1->data)) && ((temp1->data) == ((*head)->data)))
{
//insert before temp1
Slist *new = malloc(sizeof(Slist));
            if(new == NULL)
                return FAILURE;
new->link = *head;
new->data = data;
*head = new;
return SUCCESS;
}
else if(((temp1->data) < data) && (data < (temp2->data)))
{
//insert after temp1
Slist *temp = malloc(sizeof(Slist));
            if(temp == NULL)
                return FAILURE;
//assign the node structure i.e create a new node
temp->data = data;
temp->link = temp1->link;
temp1->link = temp;
return SUCCESS;
}
else
{
temp2 = temp2->link;
temp1 = temp1->link;
}
}
if(data > (temp1->data))
{
//insert after temp1
Slist *temp = malloc(sizeof(Slist));
            if(temp == NULL)
                return FAILURE;
                
//assign the node structure i.e create a new node
temp->data = data;
temp->link = NULL;
temp1->link = temp;
return SUCCESS;
}
return FAILURE;

} 