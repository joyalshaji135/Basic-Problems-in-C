// Write a program to replace all Even numbers by / and Odd numbers by $.

#include<stdio.h>
void ReplaceOddAndEven(int limit,int arr[]);
int main()
{
    int arr[100];
    int limit;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the ELements of an Array :");
    for(int i = 0; i < limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    ReplaceOddAndEven(limit,arr);
    return 0;
}
void ReplaceOddAndEven(int limit,int arr[])
{
    for (int i = 0; i < limit; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[i] = '/';
        }
        else
        {
            arr[i] = '$';
        } 
    }
    printf("\nReplace all Even Number in / and all Odd Number in $ :\t");
    for (int i = 0; i < limit; i++)
    {   
        printf("%c\t",arr[i]);
    }
    
}