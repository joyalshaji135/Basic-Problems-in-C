// Write a program to move all zeros(0’s) to the beginning of a given array.

#include<stdio.h>
void MoveAllBeginning(int limit,int arr[]);
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
    MoveAllBeginning(limit,arr);
    return 0;
}
// Logic of the Code
void MoveAllBeginning(int limit,int arr[])
{
    int i,index=0;
    for(i=limit-1; i>0; i--)
    {
        // if(arr[i]==0)
        // {
        //     continue;
        // }
         if(index==0)
        {
          index=i;
        }
        if(arr[i]!=0)
        {
            arr[index--]=arr[i];
        }
    }
    while (index>=0)
    {
        arr[index--]=0;
    }

    printf("Move All Zeros Beginning of the Array :\t");
    for(i=0; i<limit; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}