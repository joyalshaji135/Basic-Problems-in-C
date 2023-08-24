// Write a program to delete all prime numbers in an array and find out the
// sum of array elements after deleting.

#include<stdio.h>
int DeletePrime(int limit,int arr[]);
int SumOfOther(int limit,int arr[]);
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
    int sum=DeletePrime(limit,arr);
    printf("\nSum of Non Prime Numbers : %d",sum);
    return 0;
}
// Logic of the Code
int DeletePrime(int limit,int arr[])
{
    int i,j,k,flag;
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
            for(k=i; k<limit; k++)
            {
                arr[k]=arr[k+1];  
            }
            limit--;
            i--;
        }
    }
    printf("Prime Deleted New Array : ");
    for(i=0; i<limit; i++)
    {
        printf("%d\t",arr[i]);
    }
    int sum=SumOfOther(limit,arr);
    return sum;
}
int SumOfOther(int limit,int arr[])
{
    int sum=0;
    for (int i = 0; i < limit; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}