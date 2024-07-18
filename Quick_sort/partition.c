#include "main.h"

/* Function to partition the array */
int partition(int *arr, int first, int last)
{
    int pivot = arr[last];                                                      //Variable declarations
	int i, partition_index = first;
	int temp;

	for(i = first; i < last;i++)                                                //Taking loops and sorting the array using quick sort method
	{
		if(arr[i] < pivot)
		{
			temp = arr[i];
			arr[i] = arr[partition_index];
			arr[partition_index] = temp;
			partition_index++;
		}
	}
	temp = arr[i];
	arr[i] = arr[partition_index];
	arr[partition_index] = temp;

	return partition_index;
}
