// Largest Number and Second Largest Number using array

#include<stdio.h>
int main()
{
    int arr[100];
    int limit,i,j,largest,second_largest;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    largest = 0;
    second_largest = 0;

    for ( i = 0; i < limit; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        } 
    }
    for ( i = 0; i < limit; i++)
    {
         if ( arr[i] > second_largest && arr[i] != largest)
         {
            second_largest = arr[i];
         }
    }
    printf("%d is Second Largest Number",second_largest);
    printf("%d is Largest Number",largest);
    return 0;
    
}