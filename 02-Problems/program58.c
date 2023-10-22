// Write a program to separate positive and negative numbers in Negative Numbers separate arrays .

#include<stdio.h>
void PositiveAndNegative(int limit,int arr[]);
int main()
{
    int arr[100];
    int limit;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Element of an Array :");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    PositiveAndNegative(limit,arr);
    return 0;
}
void PositiveAndNegative(int limit,int arr[])
{
    int negcount=0;
    int neg[100];
    for (int i = 0; i < limit; i++)
    {
        if (arr[i] > 0)
        {
            printf("Positive : %d\t",arr[i]);
        }
        else
        {
            neg[i] = arr[i];
            negcount++;
            printf("Negative : %d\t",arr[i]);
        }
    }
    printf("\nNegative Elements Separate :\t");
    for (int i = 0; i < negcount; i++)
    {
        printf("%d\t",neg[i]);
    } 
}