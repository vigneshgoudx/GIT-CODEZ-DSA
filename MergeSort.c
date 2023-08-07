#include <stdio.h>

void Array(int *A, int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void Merge (int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}

void MergeSort(int A[], int low, int high){
    int mid; 
    if(low<high){
        mid = (low + high) /2;
        MergeSort(A, low, mid);
        MergeSort(A, mid+1, high);
        Merge(A, mid, low, high);
    }
}

int main()
{
    int A[] = {6,28,24,11,91,95,57,123,1};
    int size = 9;
    MergeSort(A, 0, 8);
    Array(A, size);
    return 0;
}
