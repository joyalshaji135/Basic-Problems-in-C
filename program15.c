// Write a program to find the sum of array elements which are multiples of
// 10 and store the elements into a new array.

#include<stdio.h>
int SumOfTenMult(int size,int arr[]);
int main()
{
    int arr[100];
    int i,limit,total;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    total=SumOfTenMult(limit,arr);
    printf("\nSum of the Multiple of Ten : %d",total);
    return 0;
}
// Logic of the Code
int SumOfTenMult(int size,int arr[])
{
    int store[100];
    int sum=0,count=0;
    printf("\nAnthor Storage Area :");
    for(int i=0; i<size; i++)
    {
        if(arr[i]%10==0)
        {
            sum=sum+arr[i];
            store[i]=arr[i];
            printf("%d\t",store[i]);
        }
    }
    return sum;
}
