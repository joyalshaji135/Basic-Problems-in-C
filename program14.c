// Write a program to find the sum of array elements which are multiples of
// 2 and divisible by 4.

#include<stdio.h>
int SumOfTwoMultAndFourDivi(int size,int arr[]);
int main()
{
    int arr[100];
    int limit,i,total;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    total=SumOfTwoMultAndFourDivi(limit,arr);
    printf("\nSum of the Two Multiples and Four Divisible : %d",total);
    return 0;
}
// Logic of the Code
int SumOfTwoMultAndFourDivi(int size,int arr[])
{
    int i,sum=0;
    printf("\nMultiple of Two Elements :");
    for(i=0; i<size; i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d\t",arr[i]);
        }
    }
    printf("\nDivisible By Four Elements :");
    for(i=0; i<size; i++)
    {
        if(arr[i]%4==0)
        {
            printf("%d\t",arr[i]);
        }
        if(arr[i]%2==0 || arr[i]%4==0)
        {
            sum=sum+arr[i];
        }
    }
    return sum;
}