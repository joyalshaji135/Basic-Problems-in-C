// Write a program to insert element in an array at specified position And identify Duplicate Elements

#include<stdio.h>
void InsertNewElement(int limit,int pos,int value,int arr[]);
void DuplicateElement(int limit,int arr[]);
int main()
{
    int arr[100];
    int limit,i,position,element;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Inserting Position of the Array :");
    scanf("%d",&position);
    printf("Enter the Inserting Element in an Array :");
    scanf("%d",&element);
    InsertNewElement(limit,position,element,arr);
    return 0;
}
// Logic of the Code
void InsertNewElement(int limit,int pos,int value,int arr[])
{
    int i;
    for(i=limit-1; i>=pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=value;

    printf("\nInserted New Array :\t");
    for(i=0; i<=limit; i++)
    {
        printf("%d\t",arr[i]);
    }
    DuplicateElement(limit,arr);
}
void DuplicateElement(int limit,int arr[])
{
    int i,j,k;
    for(i=0; i<=limit; i++)
    {
        for(j=i+1; j<=limit; j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j; k<=limit; k++)
                {
                    arr[k]=arr[k+1];
                }
                limit--;
            }
        }
    }
    printf("\nDelete All Duplicate Elements in an Array :");
    for(i=0; i<=limit; i++)
    {
        printf("%d\t",arr[i]);
    }
}