// Write a program to find the sum of array elements which are multiples of
// 3 and also find prime numbers.

#include<stdio.h>
int SumMultipleThree(int size,int arr1[]);
void FindPrime(int size,int arr2[]);
int Common(int size,int arr3[]);
int main()
{
    int arr[100];
    int i,limit,total,sum;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    total=SumMultipleThree(limit,arr);
    printf("\n1. Sum of Multiple of 3 Elements : %d",total);
    FindPrime(limit,arr);
    sum=Common(limit,arr);
    printf("\n3.1 Sum of Multiple of 3 Prime Number : %d",sum);
    return 0;
}
// Logic of the Code
int SumMultipleThree(int size,int num[])
{
    int i,sum=0;
    for(i=0; i<size; i++)
    {
        if(num[i]%3==0)
        {
            sum=sum+num[i];
        }
    }
    return sum;
}

void FindPrime(int size,int num[])
{
    int i,j,flag;
    printf("\n2. This Array Prime Numbers :");
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
        }
    }
}

int Common(int size,int num[])
{
    int i,j,flag,sum=0;
    printf("\n3. Sum of Multiple of 3 Prime Number :");
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
        if(flag==1)
        {
            if(num[i]%3==0)
            {
                printf("%d\t",num[i]);
                sum=sum+num[i];
            }
        }
    }
    return sum;
}