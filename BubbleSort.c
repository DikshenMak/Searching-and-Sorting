#include<stdio.h>
#include<conio.h>

void BubbleSort(int a[], int n)
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

void PrintArrray(int a[], int n)
{
    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
}

int main()
{
    int a[] = {25, 45, 20, 10, 21, 98};

    //Array Size Calculation
    int n = sizeof(a)/sizeof(a[0]);

    //Function Calling
    BubbleSort(a, n);

    printf("Sorted Array is : ");
    PrintArrray(a, n);

    return 0;
}