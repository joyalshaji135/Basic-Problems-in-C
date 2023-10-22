// Write a program to count the total number of prime numbers in an array.

#include<stdio.h>
int PrimeCount(int limit,int arr[]);
int main()
{
    int arr[100];
    int limit;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Element of the Array :");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count_of_prime = PrimeCount(limit,arr);
    printf("Total Count of the Non-Prime Numbers : %d",count_of_prime);
    return 0;
}
// Logic of the Code
int PrimeCount(int limit,int arr[])
{
    int flag;
    int count = 0;
    for (int i = 0; i < limit; i++)
    {
        flag = 0;
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && arr[i] != 1)
        {
            count++;
        }
    }
    return count;
}