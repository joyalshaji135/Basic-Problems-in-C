// Write a program to print all unique elements in an array.

#include<stdio.h>
void UniquePrint(int limit,int arr[]);
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
    UniquePrint(limit,arr);
    return 0;
}
// Logic of an Array 
void UniquePrint(int limit,int arr[])
{
    int i,j,flag;
    printf("Unique Elements are Printed :");
    for(i=0; i<limit; i++)
    {
        if(arr[i]!=-1)
        {
        flag=1;
        for(j=i+1; j<limit; j++)
        {
            if(arr[i]==arr[j])
            {
                flag=0;
                arr[j]=-1;
                break;
            }
        }
        if (flag==0)
        {
            printf("%d\t",arr[i]);
        }
        
        }
    }
}