#include "main.h"

data_t insertion(data_t *arr, data_t size)
{
    int temp;                                                                   //Valriable declaration
    for(int i=0;i<size-1;i++)
    {
        if(arr[i] > arr[i+1])                                                   //Sorting the elements using loops and temp variable
        {
            int key =arr[i+1];
            for(int k=(i+1); k > -1; k--)
            {
                if(arr[k] > key)
                {
                    temp =arr[k];
                    arr[k] =arr[k+1];
                    arr[k+1] =temp;
                }
            }

        }
    
    }
	
}
