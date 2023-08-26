// How to merge two sorted arrays And Delete All Even number

#include<stdio.h>
void MergeArray(int limit1,int limit2,int arr1[],int arr2[]);
void DeleteEven(int limit3,int arr3[]);
int main()
{
    int arr1[100],arr2[100];
    int limit1,limit2;
    printf("Enter the Limit of an Array 1 :");
    scanf("%d",&limit1);
    printf("Enter the Elements of an Array 1 :");
    for (int i = 0; i < limit1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the Limit of an Array 2 :");
    scanf("%d",&limit2);
    printf("Enter the Elements of an Array 2 :");
    for (int i = 0; i < limit2; i++)
    {
        scanf("%d",&arr2[i]);
    }

    MergeArray(limit1,limit2,arr1,arr2);
    return 0;
}
// Logic of the Code
void MergeArray(int limit1,int limit2,int arr1[],int arr2[])
{
    int arr3[100];
    int limit3 = limit1 + limit2;
    for (int i = 0; i < limit1; i++)
    {
        arr3[i] = arr1[i];
    }
    int j=0;
    for (int i = limit1; i < limit3; i++)
    {
        arr3[i] = arr2[j];
        j++;
    }
    printf("Merge two Unsorted Array :\t");
    for (int i = 0; i < limit3; i++)
    {
        printf("%d\t",arr3[i]);
    }
    DeleteEven(limit3,arr3);
}
void DeleteEven(int limit3,int arr3[])
{
    for (int i = 0; i < limit3; i++)
    {
        if (arr3[i] % 2 == 0)
        {
            for (int j = i; j < limit3; j++)
            {
                arr3[j] = arr3[j+1];
            }
            limit3--; 
            i--;        
        }
    }
    printf("\nDelete Even Number in an Array :\t");
    for (int i = 0; i < limit3; i++)
    {
        printf("%d\t",arr3[i]);
    }
}