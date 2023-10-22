// Write a program to find the second smallest number in an array

#include<stdio.h>
int SecondSmallest(int limit,int arr[]);
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
    int second_smallest = SecondSmallest(limit,arr);
    printf("Second Smallest Number in an Array : %d",second_smallest);
    return 0;
}
// Logic of the Code
int SecondSmallest(int limit,int arr[])
{
    int i,smallest,second_smallest;
    smallest = arr[0];
    second_smallest = arr[1];
    for(i=0; i<limit; i++)
    {
        // 4 8 2 1 6 3
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    for (i = 0; i < limit; i++)
    {
        if (arr[i]<second_smallest && arr[i]!=smallest)
        {
            second_smallest = arr[i];
        }
    }
    
    return second_smallest;
}