// Write a program to print alternate elements in an array.

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
    printf("Alternate Elements of an Array :");
    for(i=0; i<limit; i+=2) //Assignment Operator
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}