#include <stdio.h>

void GArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int Partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void QSort(int A[], int low, int high)
{
    int partitionIndex; 

    if (low < high)
    {
        partitionIndex = Partition(A, low, high); 
        QSort(A, low, partitionIndex - 1); 
       QSort(A, partitionIndex + 1, high); 
    }
}

int main()
{
    int A[] = {934,22,6,77,39.57,47,619};
    int n = 8;
    n =7;
    QSort(A, 0, n - 1);
    GArray(A, n);
    return 0;
}
