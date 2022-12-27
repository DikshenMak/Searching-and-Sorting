#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void MergeSort(int a[], int low, int high)
{
    int mid;

    if(low < high)
    {
        mid = (low + high)/2;
        MergeSort(a, low, mid);
        MergeSort(a, mid+1, high);
        merge(a, low, mid, high);
    }
}

void merge(int a[], int low, int mid, int high)
{
    int i = low, j = mid+1, temp[10], index = low, k;
    
    while((i <= mid) && (j<= high))
    {
        if(a[i] < a[j])
        {
            temp[index] = a[i];
            i++;
        }
        else
        {
            temp[index] = a[j];
            j++;
        }
        index++;
    }

    if(i > mid)
    {
        while(j <= high)
        {
            temp[index] = a[j];
            j++;
            index++;
        }
    }
    else
    {
        while(i <= mid)
        {
            temp[index] = a[i];
            i++;
            index++;
        }
    }

    for(k = low; k<index; k++)
    {
        a[k] = temp[k];
    }

}

void PrintArray(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d  ", a[i]);
    }
}

int main()
{
    int size;
    int a[10] = {12, 14, 5, 58, 98, 55, 65, 44, 22, 36};

    size = sizeof(a)/sizeof(a[0]);

    //Printing Unsorted Array
    printf("The Unsorted Array is : ");
    PrintArray(a, size);

    //Passing the Function
    MergeSort(a, 0, size-1);

    //Printing Sorted Array
    printf("\nThe Sorted Array is : ");
    PrintArray(a, size);

    return 0;
}