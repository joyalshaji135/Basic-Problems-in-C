// Write a program to find the sum of array elements except prime numbers.

#include<stdio.h>
int SumPrime(int size,int num[]);
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
    total=SumPrime(limit,arr);
    printf("\nThe Sum of the Prime Numbers : %d",total);
    return 0;
}
// Logic of the Code
int SumPrime(int size,int num[])
{
    int sum=0;
    int i,j,flag;
    printf("\nPrint the Prime Numbers :");
    for(i=0; i<size; i++)
    {
        flag=1;
        for(j=2; j<num[i]; j++)
        {
            if(num[i]%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1 && num[i]!=1)
        {
            printf("%d\t",num[i]);
            sum=sum+num[i];
        }
    }
    return sum;
}