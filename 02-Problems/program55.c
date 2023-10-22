// Write a program to sort elements of array in ascending order And find the Duplicate Elements.

#include<stdio.h>
void SortArray(int limit,int arr[]);
void DuplicateElements(int limit,int arr[]);
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
    SortArray(limit,arr);
    DuplicateElements(limit,arr);
    return 0;
}
// Logic of the Code
void SortArray(int limit,int arr[])
{
    for (int i = 0; i < limit; i++)
    {
        for (int j = i+1; j < limit; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }   
        }
    }
    printf("\nSort the Array in Asecnding :\t");
    for (int i = 0; i < limit; i++)
    {
        printf("%d\t",arr[i]);
    }
}
void DuplicateElements(int limit,int arr[])
{
    printf("\nDisplay Duplicate Elements :\t");
    for (int i = 0; i < limit; i++)
    {
        if (arr[i] != -1)
        {
            int flag = 0;
                for (int j = i+1; j < limit; j++)
                {
                    if (arr[i] == arr[j])
                    {
                        arr[j] = -1;
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                {
                    printf("%d\t",arr[i]);
                }
        }
    }   
}