// Write a program to delete all duplicate elements from an array and reverse the array after deleting.

#include<stdio.h>
void DeletingOfArray(int limit,int arr[]);
void ReverseOfArray(int size,int arr[]);
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
    DeletingOfArray(limit,arr);
    return 0;
}
void DeletingOfArray(int limit,int arr[])
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
    printf("\nDeleted Elements in an Array :");
    for(i=0; i<limit; i++)
    {
        printf("%d\t",arr[i]);
    }
    ReverseOfArray(limit,arr);
}
void ReverseOfArray(int limit,int arr[])
{
    printf("\nReverse Of an Array :");
    for(int i=limit; i>=0; i--)
    {
        if (arr[i]!=0)
        {
            printf("%d\t",arr[i]);
        }
    }
}