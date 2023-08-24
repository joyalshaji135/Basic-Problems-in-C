// Write a program to find the sum of array elements except even numbers
// which are multiples of 4

#include<stdio.h>
int EvenMultiple(int limit, int arr[]);
int main()
{
    int arr[100];
    int i,limit,total;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);;
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    total=EvenMultiple(limit,arr);
    printf("\nSum of Even Numbers : %d",total);
    return 0;
}
// Logic of the Code
int EvenMultiple(int size,int num[])
{
    int sum=0,divfoursum=0;
    printf("Divisible By 4 in an Even Numbers :");
    for(int i=0; i<size; i++)
    {
        if(num[i]%2==0 && num[i]%4==0)
        {
            printf("%d\t",num[i]);
            divfoursum=divfoursum+num[i];
        }
        if(num[i]%2==0)
        {
            sum=sum+num[i];
        }
    }
    printf("\nSum of the Divisible By 4 Numbers : %d",divfoursum);
    return sum;
}