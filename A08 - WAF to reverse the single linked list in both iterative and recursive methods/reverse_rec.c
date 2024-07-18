#include "sll.h"

int count =0;

int reverse_recursion(Slist ** head)
{
    if(*head == NULL)
        return FAILURE;
  
 
      static  Slist *prev = NULL,*cur,*next;
      cur =*head;
        
       next = cur->link;
       cur->link = prev;
       prev = cur;
       cur = next;
   
    if(cur != NULL)
        reverse_recursion(&cur);
    
 
    *head = prev;
    return SUCCESS;
}