#include<stdio.h>
#include<conio.h>

#define n 10

void PrintArray(int a[])
{
    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void BubbleSort(int a[])
{
    int temp;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void BinarySearch(int a[], int low, int high, int num)
{
    int mid;
    int flag = 0;

    mid = (low+high)/2;

    while(low == high)
    {
        if(num == a[mid])
        {
            flag = 1;
            printf("%d is found at index %d", num, mid);
        }
        else if(num > a[mid])
        {
            low = mid+1;
        }
        else if(num < a[mid])
        {
            high = mid-1;
        }
    }
    if(flag == 0)
    printf("Number is not found !!");
}



int main()
{
    int a[n], num;

    //Array Scanning
    printf("Enter the elements of array : \n");
    for(int i=0; i<n; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    //Printing Unsorted Array
    printf("The Unsorted Array is : ");
    PrintArray(a);

    //Pasing the Function For Sorting Array
    BubbleSort(a);

    //Printing Sorted Array
    printf("The Sorted Array is : ");
    PrintArray(a);

    //Scannig Number To Search
    printf("Enter the element to search : ");
    scanf("%d", &num);

    //Passing Function
    BinarySearch(a, 0, n-1, num);

    return 0;
}