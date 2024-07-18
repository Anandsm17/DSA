/*
Name : Anand S M
Date : 08-02-2024
Description:

Merge Sort is a Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves.

Objective: 

To understand the working of Merge sort

Requirement:
1.Prompt the user to Enter the length of the array(Size) and Declare an integer array 
2.Prompt the user to Enter the  elements of the array and read it using scanf()
3.Call merge_sort function to divide the array into equal halves
4.Use the merge function to merge the elements of array
5.Print the sorted element of the array

Sample execution :-)

Input	5 4 3 2 1
Output	1 2 3 4 5

*/
#include "main.h"

/* Main Function */
int main()
{
	int i, limit;

	/* Scanning the size */
	printf("Enter the size of an array\n");
	scanf("%d", &limit);

	/* Declaring the array with size */
	int arr[limit];

		
	printf("Enter the array elements\n");
	for (i = 0; i < limit; i++)
	{
	    /* Scanning the array elements */
		scanf("%d", &arr[i]);
	}
		
	/* Calling the function to bubble sort */
	merge_sort(arr, limit);
	
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
	    printf("%d ", arr[i]);
	}
		
	return 0;
}
