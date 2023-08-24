// Write a program to insert element in an array at specified position

#include<stdio.h>
void InsertArray(int size,int position,int insert_value,int arr[]);
int main()
{
    int arr[100];
    int position,limit,i,insert_value;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Replaced Value Position :");
    scanf("%d",&position);
    printf("Enter th Inserting Element :");
    scanf("%d",&insert_value);
    InsertArray(limit,position,insert_value,arr);
    return 0;
}
// Logic of the Code
void InsertArray(int limit,int pos,int value,int arr[])
{
    int i;
    for(i=limit-1; i>=pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=value;

    printf("\nInserted New Array :");
    for(i=0; i<=limit; i++)
    {
        printf("%d\t",arr[i]);
    }
}