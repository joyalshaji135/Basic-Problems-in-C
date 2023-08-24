// Write a program to print array elements in reverse order and find the 2nd
// largest number.

#include<stdio.h>
int main()
{
    int arr[100];
    int limit,i,largest,second_largest;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }

    // Logic of the Code
    largest=0;
    for(i=0; i<limit; i++)
    {
        // 2 4 1 8 3 5  largest = 2
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    second_largest=0;
    for(i=0; i<limit; i++)
    {

        if(arr[i]>second_largest && arr[i]!=largest)
        {
            second_largest=arr[i];
        }
    }
    printf("Find the Second Largest Number : %d\n",second_largest);
    printf("Find the Largest Number : %d",largest);
    return 0;
}