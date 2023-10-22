// Write a program to find the sum of array elements except odd numbers
// which are divisible by 2.

#include<stdio.h>
int main()
{
    int arr[100];
    int i,j,limit,sum=0;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    // Logic of the Code
    for(i=0; i<limit; i++)
    {
        if(arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
    }
    printf("Sum of an Divisible By 2 : %d",sum);
    return 0;
}

