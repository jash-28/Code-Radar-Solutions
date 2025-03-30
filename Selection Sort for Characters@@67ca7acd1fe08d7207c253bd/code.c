#include<stdio.h>

void selectionSort(char arr[], int n)
{
    
    int i,f;
    char temp;
    for(i=0;i<n;i++)
    {
        scanf(" %c",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    for(f=i+1;f<n;f++)
    {
       if(arr[i]>arr[f])
       {
        temp=arr[i];
        arr[i]=arr[f];
        arr[f]=temp;
       }
    }
    }
    }
    void printArray(char arr[],int n)
    {int i;
       for(i=0;i<n;i++)
    {
        printf("%c ",arr[i]);
    } 
    }