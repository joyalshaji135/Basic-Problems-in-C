// Write a program to delete all prime numbers and replace all even number & in an array.

#include<stdio.h>
void DeletePrime(int limit,int arr[],int id[]);
int main()
{
    int arr[100],id[100];
    int limit;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d",&arr[i]);
        id[i] = -1;
    }
    DeletePrime(limit,arr,id);
    return 0;
}
void DeletePrime(int limit,int arr[],int id[])
{
    for (int i = 0; i < limit; i++)
    {
        int flag = 0;
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && arr[i] != 1)
        {
            for (int k = i; k < limit; k++)
            {
                arr[k] = arr[k+1];
            }
            limit--;
            i--;
        }
        if (flag == 1)
        {
            if ( arr[i] % 2 == 0)
            {
                arr[i] = '&';
                id[i] = 0;
            }
        }
    }
    printf("Delete the all Prime And Replace All Even Number in &  : \t");
    for (int i = 0; i < limit; i++)
    {
        if (id[i] != -1)
        {
            printf("%c\t",arr[i]);
        }   
        else
        {
            printf("%d\t",arr[i]);
        }
    }
}
