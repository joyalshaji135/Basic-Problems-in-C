// Write a program to replace all odd numbers in an array with & and print
//the array in reverse order.

#include<stdio.h>
int main()
{
    int arr[100];
    int limit,i,j;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    // Logic of the Program
    printf("Result of the code :\n");
    for(i=limit-1; i>=0; i--)
    {
        if(arr[i]%2==1)
        {
            arr[i]='&';
            printf("%c\t",arr[i]);
        }
        else
        {
            printf("%d\t",arr[i]);
        }
    }
    return 0;
}