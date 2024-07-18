#include "sll.h"

int find_node(Slist *head, data_t key)
{
	   //take variable for count
        int count = 0;

	//to check for list is empty or not
	if(head == NULL)
	{
		return FAILURE;
	}
        //check for first node
          
        if(head->data == key)
        {
            count++;
            return count;
        }
	//take local reference pointer to traverse through the link
	Slist *temp = head;
	//iterate to the last of a list and copy this into a list
	while(temp != NULL)
	{
                count++;
		if(temp -> data == key)
		{
                        return count;
		}
		temp = temp -> link; 
        }
	return FAILURE;
}
