// Write a program to separate positive and negative numbers in separate
// arrays.

#include<stdio.h>
void PositiveAndNegative(int limit,int arr[]);
int main()
{
    int arr[100];
    int i,limit;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Limit of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    PositiveAndNegative(limit,arr);
    return 0;
}
// Logic of the Code
void PositiveAndNegative(int limit,int arr[])
{
    int i;
    int pos[100],neg[100];
    for(i=0; i<limit; i++)
    {
        if(arr[i]<0)
        {
            neg[i]=arr[i];
            printf("Negaive :- %d\n",neg[i]);
        }
        if(arr[i]>0)
        {
            pos[i]=arr[i];
            printf("Postive :- %d\n",pos[i]);
        }
    }
}