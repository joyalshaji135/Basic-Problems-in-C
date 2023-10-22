// Write a program to sort in descending order and reverse an array

#include<stdio.h>
void SortArray(int limit,int arr[]);
void ReverseArray(int limit,int arr1[]);
int main()
{
    int arr[100];
    int limit,i;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    SortArray(limit,arr);
}
// Logic of the Code
void SortArray(int limit,int arr[])
{
    int i,temp,j;
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
    printf("\nDescending Order Of the Array :");
    for(i=0; i<limit; i++)
    {
        printf("%d\t",arr[i]);
    }
    ReverseArray(limit,arr);
}
void ReverseArray(int limit,int arr1[])
{
    int i;
    printf("\nReverse of an Array :");
    for(i=limit; i>=0; i--)
    {
        printf("%d\t",arr1[i]);
    }
}