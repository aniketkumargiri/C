#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
//Best case --> O(nlog(n))
//Average case --> O(nlog(n))
//Worst case --> O(n^2)
int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

    int temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}

// quickSort is a non-stable non-adaptive algorithm
void quickSort(int a[], int low, int high)
{
    int partitionIndex; //index of pivot after partition
    if (low < high)
    {
        partitionIndex = partition(a, low, high);
        // printArray(a,6);
        quickSort(a, low, partitionIndex - 1); //sort left subarray
        quickSort(a, partitionIndex + 1, high); //sort right subarray
    }
}
int main()
{

    int a[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(a, n);
    quickSort(a, 0, n - 1);
    printArray(a, n);

    return 0;
}