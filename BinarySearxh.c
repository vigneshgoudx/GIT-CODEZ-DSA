#include<stdio.h>

int BinarySearch(int array[], int size ,int element)
{
    int low,mid,high;
    low = 0;
    high = size-1;
    while (low<=high)
    {
        mid = (low + high)/2;
        if (array[mid] == element)
        {
            return mid;
        }
        if (array[mid] > element)
        {
            high = mid -1;
        }
        else
        {
            low = mid +1;
        }
    }   
}

int main()
{
    int array[] = {12,13,14,17,21,31,99,619};
    int size = sizeof(array)/sizeof(int);
    int element = 13;
    int searchindex = BinarySearch(array,size,element);
    printf("The Element:%d Was Found at index: %d",element,searchindex);
    return 0;
}