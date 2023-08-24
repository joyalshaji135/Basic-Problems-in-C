// Write a program to replace all prime numbers by 0 and non-prime
// numbers by 1

#include<stdio.h>
void ReplacePrimeAndNonPrime(int limit,int arr[]);
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
    ReplacePrimeAndNonPrime(limit,arr);
}
// Logic of the Code
void ReplacePrimeAndNonPrime(int limit,int arr[])
{
    int i,j,flag;
    for(i=0; i<limit; i++)
    {
        flag=1;
        for(j=2; j<arr[i]; j++)
        {
            if(arr[i]%j==0)
            {
                flag=0;
                arr[i]=1; //Non-Prime Number Replace to 1
                break;
            }
        }
        if(flag==1 && arr[i]!=1)
        {
            arr[i]=0; // Prime Number Replace to 0
        }
    }
    printf("\nReplace Prime to 0 and Non-Prime to 1 :");
    for(i=0; i<limit; i++)
    {
        printf("%d\t",arr[i]);
    }
}