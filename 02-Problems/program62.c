// Write a program to reverse an array without using an additional array?

#include<stdio.h>
void ReverseArray(int limit,int arr[]);
int main()
{
    int arr[100];
    int limit;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    ReverseArray(limit,arr);
    return 0;
}
void ReverseArray(int limit,int arr[])
{
    printf("Reverse of an Array :");
    for (int i = limit-1; i >= 0; i--)
    {
        printf("%d\t",arr[i]);
    }
}