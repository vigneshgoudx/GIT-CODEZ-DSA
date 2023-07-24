#include<stdio.h>

int LinearSearch(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }   
    return -1;
}

int main()
{
    int array[] = {39,91,31,69,39,47,57,88,69};
    int size = sizeof(array)/sizeof(int);
    int element = 69;
    int searchindex = LinearSearch(array,size,element);
    printf("The Element:%d Was Found at index: %d",element,searchindex);
    return 0;
}