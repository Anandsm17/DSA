/*
Name : Anand S M
Date : 04-02-2024
Description : Program to find middle element and Get nth last
Sample Execution :-)
Implement functions given below :
1. sl_find_mid(head, mid)
2. sl_get_Nth_last(head, n, data)

*/
#include "sll.h"

int main()
{
	
	//variable declaration
    char check_char;
    int option, data, pos;
    int key;

    Slist *head = NULL; //initialize the header to NULL

    printf("1. Insert at last\n2. Find Mid\n3. Find Nth last\n4. Print list \n5. Exit\nEnter the Option : ");
    while (1)
    {

	/*ask user options*/
	scanf("%d", &option);

	switch (option)
	{
	    case 1:     //insert at last
		printf("Enter the number that you want to insert at last: ");
		scanf("%d", &data);

		//insert_at_last function call
		if (insert_at_last(&head, data) == FAILURE) //pass by reference
		{
		    printf("INFO : Insert last failed\n");
		}
		break;

	    case 2:     //find mid
		{
		    int mid;

		    //find_mid function call
		    if ((find_mid(head, &mid)) == LIST_EMPTY)
		    {
			printf("INFO : List is empty\n");
		    }
		    else 
		    {
			printf("Middle element is %d\n", mid);
		    }
		}
		break;

	    case 3:     //find Nth last
		printf("Enter the Number to find the last : ");
		scanf("%d", &pos);

		//find_nth_last function call
		if ((key = find_nth_last(head, pos, &data)) == FAILURE)
		{
		    printf("INFO : Position not found\n");
		}
		else if (key == LIST_EMPTY)
		{
		    printf("INFO : List is empty");
		}
		else 
		{
		    printf("%dth last is %d\n", pos, data);
		}
		break;

	    case 4:     //print list
		//print_list function call
		print_list(head);
		break;

	    case 5:     //exit
		return SUCCESS;

	    default:
		printf("Invalid Option\n");
	}
    }

    return SUCCESS;
}