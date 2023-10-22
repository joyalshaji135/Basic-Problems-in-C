// Write a program to find the 3nd smallest element in an array

#include<stdio.h>
int main()
{
    int arr[100];
    int i,j,limit,temp;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
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

    printf("Third Smallest Number In an Array : %d",arr[2]);

    // for(i=0; i<limit; i++)
    // {
    //     printf("%d\t",arr[i]);
    // }
    return 0;
}