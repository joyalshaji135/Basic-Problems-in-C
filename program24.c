// Write a program to count the total number of negative elements in an
// array and find out the sum of positive numbers in the array.

#include<stdio.h>
int CountNegative(int limit,int arr[]);
int PostiveSum(int limit,int arr[]);
int main()
{
    int arr[100];
    int i,limit,negcount,possum;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    negcount=CountNegative(limit,arr);
    possum=PostiveSum(limit,arr);
    printf("\nNegative Numbers Count : %d",negcount);
    printf("\nPostive Numbers Sum is : %d",possum);
    return 0;
}
// Logic of the Code
int CountNegative(int limit,int arr[])
{
    int i,count=0;
    for(i=0; i<limit; i++)
    {
        if(arr[i]<0)
        {
            count++;
        }
    }
    return count;
}
int PostiveSum(int limit,int arr[])
{
    int i,sum=0;
    for(i=0; i<limit; i++)
    {
        if(arr[i]>0)
        {
            sum=sum+arr[i];
        }
    }
    return sum;
}