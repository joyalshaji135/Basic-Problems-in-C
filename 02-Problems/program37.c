// Write a program to merge two arrays sorted in descending order

#include<stdio.h>
void MergeTwoArray(int limit1,int limit2,int arr1[],int arr2[]);
void SortArray(int limit3,int arr3[]);
int main()
{
    int arr1[100],arr2[100];
    int i,limit1,limit2;
    printf("Enter the Limit of an Array 1 :");
    scanf("%d",&limit1);
    printf("Enter the Elements of an Array 1 :");
    for(i=0; i<limit1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the Limit of an Array 2 :");
    scanf("%d",&limit2);
    printf("\nEnter the Elements of an Array 2 :");
    for(i=0; i<limit2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    MergeTwoArray(limit1,limit2,arr1,arr2);
    return 0;
}
// Logic of the Code
void MergeTwoArray(int limit1,int limit2,int arr1[],int arr2[])
{
    int i,j,limit3;
    int arr3[100];
    limit3=limit1+limit2;
    for(i=0; i<limit1; i++)
    {
        arr3[i]=arr1[i];
    }
    i=limit2;
    for(j=0; j<limit3; j++)
    {
        arr3[i]=arr2[j];
        i++;
    }
    printf("\nMerge two Array Elements :");
    for(i=0; i<limit3; i++)
    {
        printf("%d\t",arr3[i]);
    } 
    SortArray(limit3,arr3);
}
void SortArray(int limit3,int arr3[])
{
    int i,j,temp;
    for(i=0; i<limit3; i++)
    {
        for(j=i+1; j<limit3; j++)
        {
            if(arr3[i]<arr3[j])
            {
                temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    printf("\nSorted the Array :");
    for(i=0; i<limit3; i++)
    {
        printf("%d\t",arr3[i]);
    }
}