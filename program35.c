// Write a program to print all prime numbers in an array

#include<stdio.h>
void PrintPrime(int limit,int arr[]);
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
    PrintPrime(limit,arr);
    return 0;
}
// Logic of the Code
void PrintPrime(int limit,int arr[])
{
    int i,j,flag;
    printf("Prime Numbers : ");
    for(i=0; i<limit; i++)
    {
        flag=1;
        for(j=2; j<arr[i]; j++)
        {
            if(arr[i]%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1 && arr[i]!=1)
        {
            printf("%d\t",arr[i]);
        }
    }
}