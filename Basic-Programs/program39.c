// Write a program to find the largest and smallest number in an array.

#include<stdio.h>
int SmallestNumber(int limit,int arr[]);
int LargestNumber(int limit,int arr[]);
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
    int smallest_number = SmallestNumber(limit,arr);
    int largest_number = LargestNumber(limit,arr);
    printf("\nThe Smallest Number is %d",smallest_number);
    printf("\nThe Largest Number is : %d",largest_number);
    return 0;
}
// Logic of the Code
int SmallestNumber(int limit,int arr[])
{
    int i;
    int smallest=arr[0];
    for(i=0; i<limit; i++)
    {
        // 6 3 9 2 1 5 
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    return smallest;
}
int LargestNumber(int limit,int arr[])
{
    int i;
    int largest=arr[0];
    for(i=0; i<limit; i++)
    {
        // 6 3 9 2 1 5 
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    return largest;
}