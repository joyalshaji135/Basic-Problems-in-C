// Write a program to find the third largest number in an array.

#include<stdio.h>
int ThirdLargestNumber(int limit,int arr[]);
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
    int largest_number=ThirdLargestNumber(limit,arr);
    printf("The Third Largest Number : %d",largest_number);
    return 0;
}
// Logic of the Code
int ThirdLargestNumber(int limit,int arr[])
{
    for ( int i = 0; i < limit; i++)
    {
        for( int j = i+1; j < limit; j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int third_largest_number = arr[2];
    return third_largest_number;
}