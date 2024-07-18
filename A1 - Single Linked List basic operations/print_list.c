#include "sll.h"

void print_list(Slist *head)
{
	 //check if list is empty or not
    if(head == NULL)
    {
        printf("INFO : List is Empty");
    }
    else
    {
        //Traversing the list for printing the values 
        while(head)
        {
            printf("%d -> ", head->data);
            head= head->link;
        }
        printf("NULL\n");
    }
}