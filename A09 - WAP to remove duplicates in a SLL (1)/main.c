/*
Name : Anand S M
Date : 11-02-2024
Description : Write a function to remove the duplicate values present in the SLL.

Cases	1. List Empty
2. List Non-Empty
Case-1	List Empty
Input	Head = NULL
Output	return LIST_EMPTY
Case-2	List Non-Empty
Input	5 → 3 → 4 → 5 → 2 → 1 → 4 → 5 → 3
Output	5 → 3 → 4 → 2 → 1
Prototype	int sl_remove_duplicates(Slist **head);
head : Pointer to the first node
return value : status (LIST_EMPTY, SUCCESS)

Sample Output : 

SL List → 1 → 2 → 4 → 2 → 5 → 4 → 3 → 1 → 2 

Output → 1 → 2 → 4 → 5 → 3
*/
#include "sll.h"

int main()
{
	int option, data;


	Slist *head = NULL; /* initialize the header to NULL */

	printf("\n1. To insert the last element\n2. To print the list\n3. To remove the duplicates\n4. Exit\nEnter your option : ");
	while(1)
	{

		/*ask user options*/
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				printf("Enter the number that you want to insert at last: ");
				scanf("%d", &data);

				/*insert_at_last function call*/
				if (insert_at_last(&head, data) == FAILURE) //pass by reference
				{
					printf("INFO : insert last failure\n");
				}
				break;

			case 2:
				/* print list function call*/
				print_list(head);
				break;
			case 3:
				if (remove_duplicates(&head) == FAILURE)
				{
					printf("INFO : List is empty\n");
				}
				else
				{
					printf("INFO : Duplicates are removed Successfully\n");
				}
				break;
			case 4:
				return SUCCESS;
			default: printf("Enter proper choice !!\n");
					 break;
		}

	}

	return SUCCESS;
}