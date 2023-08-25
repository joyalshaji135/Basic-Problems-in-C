// Write a program to replace all prime numbers by 0 and non-prime numbers by 1 tthen Delete all 0's

#include<stdio.h>
void ReplacePrimeAndNonPrime(int limit,int arr[]);
int main()
{
    int arr[100];
    int limit;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    ReplacePrimeAndNonPrime(limit,arr);  
    return 0;
}
// Logic of the Code
void ReplacePrimeAndNonPrime(int limit,int arr[])
{
    for (int i = 0; i < limit; i++)
    {
        int flag = 0;
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = 1;
                arr[i] = 1;
                break;
            }  
        }
        if (flag == 0 && arr[i]!=1)
        {
            arr[i] = 0;
        }     
    }  
    printf("Replace the All Elements in an Array :\t");
    for (int i = 0; i < limit; i++)
    {
        printf("%d\t",arr[i]);
    }
    for (int i = 0; i < limit; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i; j < limit; j++)
            {
                arr[j] = arr[j+1];
            }
            limit--;
            i--;
        }
    }
    printf("\nRemove all 0 in this array :\t");
    for (int i = 0; i < limit; i++)
    {
        printf("%d\t",arr[i]);
    }
}