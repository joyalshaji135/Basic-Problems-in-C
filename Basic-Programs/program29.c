// Write a program to sort elements of array in descending order and replace
// elements at odd positions with *.

#include<stdio.h>
void SortArray(int limit,int arr[]);
void ReplaceArray(int limit,int arr[]);
int main()
{
    int arr[100];
    int i,limit;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    SortArray(limit,arr);
    return 0;
}
// Logic of the Code
void SortArray(int limit,int arr[])
{
    int i,j,temp;
    for(i=0; i<limit; i++)
    {
        for(j=i+1; j<limit; j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nSorted Array :");
    for(i=0; i<limit; i++)
    {
        printf("%d\t",arr[i]);
    }
    ReplaceArray(limit,arr);
}
void ReplaceArray(int limit,int arr[])
{
    int i;
    printf("Odd Position Elements Replace to * : \t");
    for(i=0; i<limit; i++) //position start 0 to ...... n
    {
        if(i%2==0) // Position Odd Case to replace array value * Weather the position start to 0  
        {
            arr[i]='*';
            printf("%c\t",arr[i]);
        }
        else
        {
            printf("%d\t",arr[i]);
        }
    }
}
