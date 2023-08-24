// Write a program to store even numbers and odd numbers in separate
// arrays.

#include<stdio.h>
int main()
{
    int arr[100],even[100],odd[100];
    int limit,i,j;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    // Logic of the Code
    for(i=0; i<limit; i++)
    {
        if(arr[i]%2==0)
        {
            even[i]=arr[i];
            printf("even : %d\n",even[i]);
        }
        else
        {
            odd[i]=arr[i];
            printf("odd : %d\n",odd[i]);
        }
    }
    return 0;
}