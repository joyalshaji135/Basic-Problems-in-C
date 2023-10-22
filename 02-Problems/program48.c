// Write a program to delete all duplicate elements from an array.

#include<stdio.h>
void DeleteDuplicate(int limit,int arr[]);
int main()
{
    int arr[100];
    int limit,i;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    DeleteDuplicate(limit,arr);
    return 0;
}
// Logic of the Code
void DeleteDuplicate(int limit,int arr[])
{
    int i,j,k;
    printf("\nBefore Duplicate Element Array :\t");
    for(i=0; i<limit; i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0; i<limit; i++)
    {
        if(arr[i]!=-1)
        {
            for(j=i+1; j<limit; j++)
            {
                if(arr[i]==arr[j])
                {
                    for(k=j; k<limit; k++)
                    {
                        arr[k]=arr[k+1];
                    }
                    limit--;
                    k--;
                }
            }
        }
    }
    printf("\nDelete the Duplicate Elements :\t");
    for(i=0; i<limit; i++)
    {
        printf("%d\t",arr[i]);
    }
}