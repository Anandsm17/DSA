/*
Name : Anand S M
Date : 08-02-2024
Description:
A Sorting Algorithm is used to rearrange a given array elements according to a comparison operator on the elements. 

Objective: 
To understand the working of different Sorting Techniques.

Requirement:
1.Declare the Length of the input array(Size) as Macro 
2.Accept the elements of the Input array.
3.Call sort function

*/


#include "main.h"

/* Main Function */
int main()
{
	int i, limit, option;

	/* Scanning the size */
	printf("Enter the size of an array\n");
	scanf("%d", &limit);

	/* Declaring the array with size */
	data_t arr[limit];

		
	printf("Enter the array elements\n");
	for (i = 0; i < limit; i++)
	{
	    /* Scanning the array elements */
		scanf("%d", &arr[i]);
	}
		
	/* Calling the function to bubble sort */
	insertion(arr, limit);
	
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
	    printf("%d ", arr[i]);
	}
		
	return 0;
}
