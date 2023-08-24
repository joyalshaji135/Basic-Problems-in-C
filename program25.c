// Write a program to replace all Even numbers by 0 and Odd numbers by 1.

#include<stdio.h>
void ReplaceOddAndEven(int limit,int arr[]);
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
    ReplaceOddAndEven(limit,arr);
    return 0;
}
// Logic of the Code
void ReplaceOddAndEven(int limit,int arr[])
{
    int i;
    for(i=0; i<limit; i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]=0;
        }
        else
        {
            arr[i]=1;
        }
    }
    printf("Replace to Even to 0 and Odd to 1 :");
    for(i=0; i<limit; i++)
    {
        printf("%d\t",arr[i]);
    }
}
