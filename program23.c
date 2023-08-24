// Write a program to print all negative elements in an array

#include<stdio.h>
void NegativeNumber(int limit,int arr[]);
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
    NegativeNumber(limit,arr);
    return 0;
}
// Logic of the Code
void NegativeNumber(int limit,int arr[])
{
    int i;
    printf("\nAll Negative Numbers :");
    for(i=0; i<limit; i++)
    {
        if(arr[i]<0)
        {
            printf("%d\t",arr[i]);
        }
    }
}
