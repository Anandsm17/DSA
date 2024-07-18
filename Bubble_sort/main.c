/*
Name : Anand S M
Date : 06-02-2024
Description : A Sorting Algorithm is used to rearrange a given array elements according to a comparison operator on the elements.
Requirement:
1.Declare the Length of the input array(Size) as Macro 
2.Accept the elements of the Input array
3.Call sort function

Smaple execution :-)

Input	5 4 3 2 1
Output	1 2 3 4 5

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
	bubble(arr, limit);
	
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
	    printf("%d ", arr[i]);
	}
		
	return 0;
}
