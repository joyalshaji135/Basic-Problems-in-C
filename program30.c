// Write a program to find the average of negative and positive numbers in an array.

#include<stdio.h>
double AverageOfNegative(int limit,int arr[]);
double AverageOfPositive(int limit,int arr[]);
int main()
{
    int arr[100];
    int i,limit;
    double average_negative,average_positive;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    average_negative=AverageOfNegative(limit,arr);
    average_positive=AverageOfPositive(limit,arr);
    printf("\nAverage of Positive Numbers : %f",average_positive);
    printf("\nAverage of Negative Numbers : %f",average_negative);
    return 0;
}
// Logic of the Code
double AverageOfNegative(int limit,int arr[])
{
    int i,sum=0,neg_count=0;
    double avg_neg;
    for(i=0; i<limit; i++)
    {
        if(arr[i]<0)
        {
            sum=sum+arr[i];
            neg_count++;
        }
    }
    avg_neg=sum/neg_count;
    return avg_neg;
}
double AverageOfPositive(int limit,int arr[])
{
    int i,sum=0,pos_count=0;
    double avg_pos;
    for(i=0; i<limit; i++)
    {
        if(arr[i]>0)
        {
            sum=sum+arr[i];
            pos_count++;
        }
    }
    avg_pos=sum/pos_count;
    return avg_pos;
}