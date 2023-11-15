// Write a Program to reverse an array of numbers

#include<stdio.h>
int main()
{
    int arr[100];
    int limit,i,j;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Reverse of an Array:");
    for ( i = limit-1; i >= 0; i--)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}