// Write a program to replace all even numbers in an array with $ and print
// the array in descending order.

#include<stdio.h>
int main()
{
    int arr[100];
    int limit,i,j,temp;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Aarry :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    //Logic of the Code
    for(i=0; i<limit; i++)
    {
        for(j=i+1; j<limit; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Result of the code :\n");
    for(i=0; i<limit; i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]='$';
            printf("%c\t",arr[i]);
        }
        else
        {
            printf("%d\t",arr[i]);
        }
    }
    return 0;
}