// Write a program to sort and reverse an array.

#include<stdio.h>
void SortArray(int limit,int arr[]);
void ReverseArray(int limit,int arr[]);
int main()
{
    int arr[100];
    int limit;
    printf("Enter the limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    SortArray(limit,arr);
    return 0;
}
// Logic of the Code
void SortArray(int limit,int arr[])
{
    int temp;
    for (int i = 0; i < limit; i++)
    {
        for (int j = i+1; j < limit; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nSort the Array :\t");
    for (int i = 0; i < limit; i++)
    {
        printf("%d\t",arr[i]);
    }
    ReverseArray(limit,arr);
}
void ReverseArray(int limit,int arr[])
{
    printf("\nReverse  of the Array :\t");
    for (int i = limit-1; i >= 0; i--)
    {
        printf("%d\t",arr[i]);
    }
}