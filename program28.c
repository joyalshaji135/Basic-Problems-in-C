// Write a program to sort elements of an array in ascending order and
// delete duplicate elements

#include<stdio.h>
void SortArray(int limit,int arr[]);
void DeleteDuplicate(int limit,int arr[]);
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
            if(arr[i]>arr[j])
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
    DeleteDuplicate(limit,arr);
}
void DeleteDuplicate(int limit,int arr[])
{
    int i,j,k;
    for(i=0; i<limit; i++)
    {
        for(j=i+1; j<limit; j++)
        {
            if(arr[i]==arr[j])
            {
                
                for(k=j; k<limit; k++)
                {
                    arr[k]=arr[k+1];
                }
                limit--;
            }
        }
    }
    printf("\nRemove Duplicate Elements :");
    for(i=0; i<limit; i++)
    {
        printf("%d\t",arr[i]);
    }
}