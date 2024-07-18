#include "main.h"

data_t bubble(data_t *arr, int size )
{
    int temp;                                                                   //Local variable declaration 
    for(int i =0; i<size; i++)                                                  // Loops to rearrange the array using Bubble sort alogorithm
    {
        for(int j = i; j<size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp =arr[i];
                arr[i] = arr[j];
                arr[j] =temp;
            }
        }
    }
}
