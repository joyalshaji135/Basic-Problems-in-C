// Write a program to find the average of numbers in an array

#include<stdio.h>
float AverageOfArray(int limit,int arr[]);
int main()
{
    int arr[100];
    int limit;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    float average = AverageOfArray(limit,arr);
    printf("Average of the Array : %f",average);
    return 0;
}
float AverageOfArray(int limit,int arr[])
{
    int sum = 0;
    float average;
    for (int i = 0; i < limit; i++)
    {
        sum = sum + arr[i];
    }
    average = sum / limit;
    return average;
}