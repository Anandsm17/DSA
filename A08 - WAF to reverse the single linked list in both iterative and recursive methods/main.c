/*
Name : Anand S M
Date : 06-02-2024
Description : Program to  reverse the single linked list in both iterative and recursive methods
Implement functions given below : 

1. sl_reverse_iterative(head) 

2. sl_reverse_recursive(head)

*/

#include "sll.h"

int main()
{
    char check_char;
	int option,number,key,n;


	Slist *head = NULL; //initialize the header to NULL

	printf("1. Insert the element\n2. Print list\n3. Reverse Iterative\n4. Reverse Recusive\n5. Exit\nEnter your choice : ");
	while(1)
	{

		/*ask user options*/
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				printf("Enter the number that you want to insert at last: ");
				scanf("%d", &number);

				/*insert_at_last function call*/
				if (insert_at_last(&head, number) == -1) //pass by reference
				{
					printf("INFO : Insert at last failure\n");
				}
				break;

			case 2:
				/* print list function call*/
				print_list(head);
				break;
			case 3:
				if (reverse_iter(&head) == -1)
				{
					printf("INFO : List is empty\n");
				}
				else
				{
					printf("INFO : Reverse iterative successfull\n");
				}
				break;
			case 4:
				if (reverse_recursion(&head) == -1)
				{
					printf("INFO : List is empty\n");
				}
				else
				{
					printf("INFO : Reverse recursive successfull\n");
				}
				break;
			case 5:
				return SUCCESS;
			default: printf("Enter proper choice !!\n");
		}

	}

	return SUCCESS;
}