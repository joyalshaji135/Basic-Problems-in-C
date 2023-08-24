// Write a program to print the array by skipping two values next to the
// multiples of 5.

#include<stdio.h>
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
    // Logic of the Code
    for(i=0; i<limit; i++)
    {
        if(arr[i]%5==0)
        {
            continue; //Skipping Jumping Statement
        }
        else
        {
            printf("%d\t",arr[i]);
        }
    }
    return 0;
}