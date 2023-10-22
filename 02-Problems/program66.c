// Write a program to print all unique elements in an array And Delete All Prime Numbers

#include<stdio.h>
void UniqueArray(int limit,int arr[]);
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
    UniqueArray(limit,arr);
    return 0;
}
void UniqueArray(int limit,int arr[])
{
    printf("\nAll Unique Elements in an Array :\t");
    for (int i = 0; i < limit; i++)
    {
        if (arr[i] != -1)
        {
            int flag = 0;
                for (int j = i+1; j < limit; j++)
                {
                    if (arr[i] == arr[j])
                    {
                        arr[i] = -1;
                        arr[j] = -1;
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    printf("%d\t",arr[i]);
                        int prime = 0;
                            for (int l = 2; l < arr[i]; l++)
                            {
                                if (arr[i] % l == 0)
                                {
                                    prime = 1;
                                }
                            }
                            if (prime == 0 && arr[i] != 1)
                            {
                                for (int k = i; k < limit; k++)
                                {
                                arr[k] = arr[k+1];
                                }
                                limit--;
                                i--;
                            }
                }
        }
    }
    printf("\nRemove All Unique Prime Numbers :\t");
    for (int i = 0; i < limit; i++)
    {
        if (arr[i] != -1)
        {
            printf("%d\t",arr[i]);   
        }
    }
}