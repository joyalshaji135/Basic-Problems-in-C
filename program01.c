// Write a program to find the Kth largest and Kth smallest element in an
// array.

#include<stdio.h>
int main()
{
    int arr[100];
    int limit,i,smallest,largest;
    printf("Enter the Limit of an array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an array :");
    for(i=0; i<limit;  i++)
    {
        scanf("%d",&arr[i]);
    }
    // Logic of the Code
    smallest=arr[0];
    largest=arr[0];
    for(i=0; i<limit; i++)
    { 
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("Result of the code :\n");
    printf("Smallest Number in this Array : %d",smallest);
    printf("\nLargest Number in this Array : %d",largest);
    return 0;
}