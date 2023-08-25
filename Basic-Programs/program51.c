// Write a program to count the total number of negative elements in an array.

#include<stdio.h>
int NegativeCount(int limit,int arr[]);
int main()
{
    int arr[100];
    int i,limit;
    printf("Enter the limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for( i = 0; i < limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count = NegativeCount(limit,arr);
    printf("Total Count of a Negative Numbers : %d",count);
    return 0;
}
// Logic of the Code
int NegativeCount(int limit,int arr[])
{
    int count = 0;
    for (int i = 0; i < limit; i++)
    {
        if (arr[i] < 0)
        {
            count++;
        }
    }
    return count;
}