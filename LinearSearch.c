#include<stdio.h>

int LinearSearch(int arr[], int size, int element)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={2,54,65,98,74,1,32,655};
    int size = sizeof(arr)/sizeof(int);
    int element = 98;
    int search = LinearSearch(arr, size, element);
    if(search==-1)
    {
        printf("Element is not found");
    }
    else
    {
        printf("Element is found at index %d", search);
    }    
}